// Nekki.SF2.GUI.Tutorial.Arrow$$Update @ RVA 0x353F5F0

void Nekki_SF2_GUI_Tutorial_Arrow__Update(Nekki_SF2_GUI_Tutorial_Arrow_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_Transform_o *transform;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  
  if ((DAT_04568ae9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ae9 = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields)._arrowImg;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pNVar4 = (__this->fields)._arrowImg;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      transform = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._arrowImg;
      if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Transform_o *)0x0)) {
        UVar7 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
        fVar5 = (__this->fields).FJINPAFBBHK;
        fVar6 = -fVar5;
        if ((__this->fields).AALMLDNOAPF != false) {
          fVar6 = fVar5;
        }
        UnityEngine_TransformExtensions__SetLocalPositionY
                  (transform,UVar7.fields.y - fVar6,(MethodInfo *)0x0);
        iVar1 = (__this->fields).IFPOOAMGEJG;
        if ((__this->fields).AALMLDNOAPF == false) {
          iVar3 = iVar1 + -1;
          if (iVar1 < 1) {
            (__this->fields).AALMLDNOAPF = true;
            return;
          }
        }
        else {
          if ((__this->fields).JGJPJDDCPNK <= iVar1) {
            (__this->fields).AALMLDNOAPF = false;
            return;
          }
          iVar3 = iVar1 + 1;
        }
        (__this->fields).IFPOOAMGEJG = iVar3;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

