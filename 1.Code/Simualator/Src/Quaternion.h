#ifndef  _PDR_QUATERNION_H_
#define  _PDR_QUATERNION_H_

#ifdef __cplusplus
extern "C" {
#endif

/**---------------------------------------------------------------------
* Function    : QuaternionNorm
* Description : ��Ԫ����һ��
* Date        : 2022/09/21 logzhan
*---------------------------------------------------------------------**/
void QuaternionNorm(float* q0, float* q1, float* q2, float* q3);

/**---------------------------------------------------------------------
* Function    : QuaternConj
* Description : ��Ԫ��������Ԫ��
* Date        : 2022/09/21 logzhan
*---------------------------------------------------------------------**/
void QuaternConj(float _q[], float q[]);

/**---------------------------------------------------------------------
* Function    : QuaternProd
* Description : ��Ԫ���˷�
* Date        : 2022/09/21 logzhan
*---------------------------------------------------------------------**/
void QuaternProd(float ab[], float a[], float b[]);

#ifdef __cplusplus
}
#endif

#endif