// IHIFNKAMALG$$.ctor @ RVA 0x351F218

void IHIFNKAMALG___ctor(IHIFNKAMALG_o *__this,UnityEngine_UIVertex_o *JGHIJMJNJLE,MethodInfo *method
                       )

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  fVar1 = (JGHIJMJNJLE->fields).position.fields.x;
  fVar2 = (JGHIJMJNJLE->fields).position.fields.y;
  (__this->fields).BLEOKMIDGIK.fields.z = (JGHIJMJNJLE->fields).position.fields.z;
  (__this->fields).BLEOKMIDGIK.fields.x = fVar1;
  (__this->fields).BLEOKMIDGIK.fields.y = fVar2;
  fVar1 = (JGHIJMJNJLE->fields).normal.fields.x;
  fVar2 = (JGHIJMJNJLE->fields).normal.fields.y;
  (__this->fields).IEPAILIKIEM.fields.z = (JGHIJMJNJLE->fields).normal.fields.z;
  (__this->fields).IEPAILIKIEM.fields.x = fVar1;
  (__this->fields).IEPAILIKIEM.fields.y = fVar2;
  (__this->fields).EFJKPCADGJH.fields.rgba = (JGHIJMJNJLE->fields).color.fields.rgba;
  *(undefined8 *)&(__this->fields).EFJKPCADGJH.fields.r =
       *(undefined8 *)&(JGHIJMJNJLE->fields).color.fields.r;
  *(undefined8 *)&(__this->fields).EOJKMBCIECH.fields.y =
       *(undefined8 *)&(JGHIJMJNJLE->fields).uv0.fields.w;
  *(undefined8 *)&(__this->fields).IPOCGMIGMNO.fields.y =
       *(undefined8 *)&(JGHIJMJNJLE->fields).uv1.fields.w;
  *(undefined8 *)&(__this->fields).FBGEPDAJILH.fields.y =
       *(undefined8 *)&(JGHIJMJNJLE->fields).uv2.fields.w;
  fVar1 = (JGHIJMJNJLE->fields).tangent.fields.w;
  uVar3 = *(undefined8 *)&(JGHIJMJNJLE->fields).tangent.fields;
  (__this->fields).JLJGJDCMODE.fields.y = (JGHIJMJNJLE->fields).tangent.fields.z;
  (__this->fields).JLJGJDCMODE.fields.z = fVar1;
  *(undefined8 *)&(__this->fields).AEBBFLGHGJC.fields.y = uVar3;
  return;
}

