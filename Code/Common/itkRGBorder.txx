/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    itkRGBorder.txx
  Language:  C++
  Date:      $Date$
  Version:   $Revision$


  Copyright (c) 2000 National Library of Medicine
  All rights reserved.

  See COPYRIGHT.txt for copyright details.

=========================================================================*/
namespace itk
{

template<class TInputImage, class TOutputImage>
RGBorder<TInputImage,TOutputImage>
::RGBorder(void):
  m_BorderLength(0)
{
}

template<class TInputImage, class TOutputImage>
RGBorder<TInputImage,TOutputImage>
::~RGBorder()
{

}

/**
 * PrintSelf
 */
template <class TInputImage, class TOutputImage>
void
RGBorder<TInputImage,TOutputImage>
::PrintSelf(std::ostream& os, Indent indent)
{
  Superclass::PrintSelf(os,indent);
  os << indent << "Region border object" << std::endl;

}// end PrintSelf

} // namespace itk
