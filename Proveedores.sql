USE [Proveedores]
GO
/****** Object:  Table [dbo].[proveedores]    Script Date: 23/04/2022 23:25:47 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
SET ANSI_PADDING ON
GO
CREATE TABLE [dbo].[proveedores](
	[Id_Proveedor] [int] NULL,
	[Proveedor] [varchar](60) NULL,
	[Nit] [varchar](12) NULL,
	[Nombre] [varchar](25) NULL,
	[Apellido] [varchar](25) NULL,
	[Direccion] [varchar](25) NULL,
	[Telefono] [varchar](25) NULL
) ON [PRIMARY]

GO
SET ANSI_PADDING OFF
GO
