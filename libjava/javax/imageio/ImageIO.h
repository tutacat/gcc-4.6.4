
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_imageio_ImageIO__
#define __javax_imageio_ImageIO__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
          class BufferedImage;
          class RenderedImage;
      }
    }
    namespace net
    {
        class URL;
    }
  }
  namespace javax
  {
    namespace imageio
    {
        class ImageIO;
        class ImageReader;
        class ImageTypeSpecifier;
        class ImageWriter;
      namespace spi
      {
          class IIORegistry;
          class ServiceRegistry$Filter;
      }
      namespace stream
      {
          class ImageInputStream;
          class ImageOutputStream;
      }
    }
  }
}

class javax::imageio::ImageIO : public ::java::lang::Object
{

  ImageIO();
  static ::java::util::Iterator * getReadersByFilter(::java::lang::Class *, ::javax::imageio::spi::ServiceRegistry$Filter *, ::java::lang::Object *);
  static ::java::util::Iterator * getWritersByFilter(::java::lang::Class *, ::javax::imageio::spi::ServiceRegistry$Filter *, ::java::lang::Object *);
public:
  static ::java::io::File * getCacheDirectory();
  static ::java::util::Iterator * getImageReadersByFormatName(::java::lang::String *);
  static ::java::util::Iterator * getImageReadersByMIMEType(::java::lang::String *);
  static ::java::util::Iterator * getImageReadersBySuffix(::java::lang::String *);
  static ::java::util::Iterator * getImageWritersByFormatName(::java::lang::String *);
  static ::java::util::Iterator * getImageWritersByMIMEType(::java::lang::String *);
  static ::java::util::Iterator * getImageWritersBySuffix(::java::lang::String *);
  static JArray< ::java::lang::String * > * getReaderFormatNames();
  static JArray< ::java::lang::String * > * getReaderMIMETypes();
private:
  static ::javax::imageio::spi::IIORegistry * getRegistry();
public:
  static jboolean getUseCache();
  static JArray< ::java::lang::String * > * getWriterFormatNames();
  static JArray< ::java::lang::String * > * getWriterMIMETypes();
  static void scanForPlugins();
  static void setCacheDirectory(::java::io::File *);
  static void setUseCache(jboolean);
  static jboolean write(::java::awt::image::RenderedImage *, ::java::lang::String *, ::java::io::File *);
  static jboolean write(::java::awt::image::RenderedImage *, ::java::lang::String *, ::java::io::OutputStream *);
  static jboolean write(::java::awt::image::RenderedImage *, ::java::lang::String *, ::javax::imageio::stream::ImageOutputStream *);
  static ::java::awt::image::BufferedImage * read(::javax::imageio::stream::ImageInputStream *);
  static ::java::awt::image::BufferedImage * read(::java::net::URL *);
  static ::java::awt::image::BufferedImage * read(::java::io::InputStream *);
  static ::java::awt::image::BufferedImage * read(::java::io::File *);
  static ::javax::imageio::stream::ImageInputStream * createImageInputStream(::java::lang::Object *);
  static ::javax::imageio::stream::ImageOutputStream * createImageOutputStream(::java::lang::Object *);
  static ::javax::imageio::ImageReader * getImageReader(::javax::imageio::ImageWriter *);
  static ::java::util::Iterator * getImageReaders(::java::lang::Object *);
  static ::java::util::Iterator * getImageWriters(::javax::imageio::ImageTypeSpecifier *, ::java::lang::String *);
  static ::javax::imageio::ImageWriter * getImageWriter(::javax::imageio::ImageReader *);
  static ::java::util::Iterator * getImageTranscoders(::javax::imageio::ImageReader *, ::javax::imageio::ImageWriter *);
private:
  static ::java::io::File * cacheDirectory;
  static jboolean useCache;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_imageio_ImageIO__
