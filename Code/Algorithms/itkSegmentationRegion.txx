/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    itkSegmentationRegion.txx
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

Copyright (c) 2001 Insight Consortium
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.

 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

 * The name of the Insight Consortium, nor the names of any consortium members,
   nor of any contributors, may be used to endorse or promote products derived
   from this software without specific prior written permission.

  * Modified source versions must be plainly marked as such, and must not be
    misrepresented as being the original software.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER AND CONTRIBUTORS ``AS IS''
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

=========================================================================*/
#ifndef _itkSegmentationRegion_txx
#define _itkSegmentationRegion_txx

namespace itk
{

template<class TInputImage, class TOutputImage>
SegmentationRegion<TInputImage,TOutputImage>
::SegmentationRegion(void):
  m_RegionLabel(0),
  m_RegionArea(0),
  m_UniqueLabel(0)
{
  m_MeanVec = 0;
}

template<class TInputImage, class TOutputImage>
SegmentationRegion<TInputImage,TOutputImage>
::~SegmentationRegion()
{

}

/**
 * PrintSelf
 */
template <class TInputImage, class TOutputImage>
void
SegmentationRegion<TInputImage,TOutputImage>
::PrintSelf( std::ostream& os, Indent indent ) const
{

  Superclass::PrintSelf(os,indent);
  os << indent << "Segmentation region object" << std::endl;
  os << indent << "Number of unique regions: " << m_UniqueLabel << std::endl;
  os << indent << "Region label            : " << m_RegionLabel << std::endl;
  os << indent << "Area of the region      : " << m_RegionArea  << std::endl;

}// end PrintSelf


template<class TInputImage, class TOutputImage>
void
SegmentationRegion<TInputImage,TOutputImage>
::SetMeanRegionIntensity( VecDblType averageRegionIntensity )
{

  m_MeanVec = averageRegionIntensity;

}// end SetMeanRegionIntensity()



template<class TInputImage, class TOutputImage>
SegmentationRegion<TInputImage,TOutputImage>::VecDblType
SegmentationRegion<TInputImage,TOutputImage>
::GetMeanRegionIntensity()
{

  return m_MeanVec;

}// end GetMeanRegionIntensity()

} // namespace itk


#endif
