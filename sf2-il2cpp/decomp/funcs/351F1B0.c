// IHIFNKAMALG$$MGFGGIPGFNJ @ RVA 0x351F1B0

void IHIFNKAMALG__MGFGGIPGFNJ
               (IHIFNKAMALG_o *__this,UnityEngine_UIVertex_o *AJLBDPAPMCD,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  fVar1 = (__this->fields).BLEOKMIDGIK.fields.x;
  fVar2 = (__this->fields).BLEOKMIDGIK.fields.y;
  (AJLBDPAPMCD->fields).position.fields.z = (__this->fields).BLEOKMIDGIK.fields.z;
  (AJLBDPAPMCD->fields).position.fields.x = fVar1;
  (AJLBDPAPMCD->fields).position.fields.y = fVar2;
  fVar1 = (__this->fields).IEPAILIKIEM.fields.x;
  fVar2 = (__this->fields).IEPAILIKIEM.fields.y;
  (AJLBDPAPMCD->fields).normal.fields.z = (__this->fields).IEPAILIKIEM.fields.z;
  (AJLBDPAPMCD->fields).normal.fields.x = fVar1;
  (AJLBDPAPMCD->fields).normal.fields.y = fVar2;
  (AJLBDPAPMCD->fields).color.fields.rgba = (__this->fields).EFJKPCADGJH.fields.rgba;
  uVar3 = *(undefined8 *)&(__this->fields).EFJKPCADGJH.fields.r;
  (AJLBDPAPMCD->fields).uv0.fields.y = 0.0;
  (AJLBDPAPMCD->fields).uv0.fields.z = 0.0;
  *(undefined8 *)&(AJLBDPAPMCD->fields).color.fields.r = uVar3;
  uVar3 = *(undefined8 *)&(__this->fields).EOJKMBCIECH.fields.y;
  (AJLBDPAPMCD->fields).uv1.fields.y = 0.0;
  (AJLBDPAPMCD->fields).uv1.fields.z = 0.0;
  *(undefined8 *)&(AJLBDPAPMCD->fields).uv0.fields.w = uVar3;
  uVar3 = *(undefined8 *)&(__this->fields).IPOCGMIGMNO.fields.y;
  (AJLBDPAPMCD->fields).uv2.fields.y = 0.0;
  (AJLBDPAPMCD->fields).uv2.fields.z = 0.0;
  *(undefined8 *)&(AJLBDPAPMCD->fields).uv1.fields.w = uVar3;
  uVar3 = *(undefined8 *)&(__this->fields).FBGEPDAJILH.fields.y;
  (AJLBDPAPMCD->fields).uv3.fields.y = 0.0;
  (AJLBDPAPMCD->fields).uv3.fields.z = 0.0;
  *(undefined8 *)&(AJLBDPAPMCD->fields).uv2.fields.w = uVar3;
  fVar1 = (__this->fields).JLJGJDCMODE.fields.z;
  uVar3 = *(undefined8 *)&(__this->fields).AEBBFLGHGJC.fields.y;
  (AJLBDPAPMCD->fields).tangent.fields.z = (__this->fields).JLJGJDCMODE.fields.y;
  (AJLBDPAPMCD->fields).tangent.fields.w = fVar1;
  (AJLBDPAPMCD->fields).tangent.fields.x = (float)(int)uVar3;
  (AJLBDPAPMCD->fields).tangent.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
  return;
}

