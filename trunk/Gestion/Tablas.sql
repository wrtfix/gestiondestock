-- phpMyAdmin SQL Dump
-- version 3.2.2.1deb1
-- http://www.phpmyadmin.net
--
-- Servidor: localhost
-- Tiempo de generación: 22-02-2010 a las 19:47:32
-- Versión del servidor: 5.1.37
-- Versión de PHP: 5.2.10-2ubuntu6.4

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";

--
-- Base de datos: `demo`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `cliente`
--

CREATE TABLE IF NOT EXISTS `cliente` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `nombre` varchar(30) NOT NULL,
  `direccion` varchar(50) NOT NULL,
  `localidad` varchar(30) NOT NULL,
  `provincia` varchar(50) NOT NULL,
  `iva` float NOT NULL,
  `cuit` varchar(20) NOT NULL,
  `email` varchar(100) NOT NULL,
  `telefono` varchar(30) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=5 ;

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `ctacte`
--

CREATE TABLE IF NOT EXISTS `ctacte` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `nombre` varchar(100) NOT NULL,
  `debe` float NOT NULL,
  `haber` float NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=21 ;

--
-- Volcar la base de datos para la tabla `ctacte`
--

INSERT INTO `ctacte` (`id`, `nombre`, `debe`, `haber`) VALUES
(20, 'jorge carlos mendiola', 1, 2),
(19, 'jorge carlos mendiola', 0, 0);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `stock`
--

CREATE TABLE IF NOT EXISTS `stock` (
  `codigobarra` varchar(30) NOT NULL,
  `modelo` varchar(300) NOT NULL,
  `producto` varchar(300) NOT NULL,
  `Tipo` tinyint(1) NOT NULL,
  `precio` float NOT NULL,
  `dolar` float NOT NULL,
  `stockmin` int(11) NOT NULL,
  `stockmax` int(11) NOT NULL,
  `idproveedor` int(11) NOT NULL,
  PRIMARY KEY (`codigobarra`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `venta`
--

CREATE TABLE IF NOT EXISTS `venta` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `producto` varchar(330) NOT NULL,
  `cantidad` int(11) NOT NULL,
  `hard` float NOT NULL,
  `serv` float NOT NULL,
  `efectivo` float NOT NULL,
  `tarjeta` float NOT NULL,
  `ctecta` float NOT NULL,
  `gastos` float NOT NULL,
  `fecha` datetime NOT NULL,
  `motivo` varchar(340) DEFAULT NULL,
  `nrocaja` int(11) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=260 ;


