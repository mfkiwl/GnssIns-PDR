#ifndef _PDR_DETECTOR_H_
#define _PDR_DETECTOR_H_

#include "PDRBase.h"

/**---------------------------------------------------------------------
* Function    : pdr_initDetector
* Description : ��ʼ���˶���������ʶ���û�������һ���˶�ģʽ
* Date        : 2020/02/16 logzhan & logzhan
*---------------------------------------------------------------------**/
void Detector_Init(void);

/**---------------------------------------------------------------------
* Function    : DetectorReset
* Description : ����PDR�˶������
* Date        : 2022/09/23 logzhan
*---------------------------------------------------------------------**/
void DetectorReset(void);

/**---------------------------------------------------------------------
* Function    : DetectorUpdateIMU
* Description : �����˶����ͼ������imu��Ϣ���������һ����ʱ�����������
*               �û����˶�����
* Date        : 2022/09/23
*---------------------------------------------------------------------**/
void DetectorUpdateIMU(IMU_t* imu);

/**---------------------------------------------------------------------
* Function    : DetectMotionType
* Description : pdr�˶����ͼ��
* Date        : 2020/7/20
*---------------------------------------------------------------------**/
int DetectMotionType(void);

#endif