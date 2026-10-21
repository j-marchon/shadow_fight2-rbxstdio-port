// UnityAnimator$$AddAnimation @ RVA 0x35D0E48

void UnityAnimator__AddAnimation
               (UnityAnimator_o *__this,UnityAnimator_PNHHAMAIIAB_o *IMMNELPBGIF,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_AnimationEvent_o *__this_00;
  UnityEngine_Animation_o *pUVar4;
  UnityEngine_AnimationClip_o *x;
  System_Collections_Generic_List_UnityAnimator_PNHHAMAIIAB__o *__this_01;
  UnityAnimator_PNHHAMAIIAB_array *pUVar5;
  UnityEngine_AnimationClip_o *__this_02;
  float value;
  UnityAnimator_PNHHAMAIIAB_o local_50;
  
  if ((DAT_04568fe1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_AnimationEvent_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_2973);
    DAT_04568fe1 = 1;
  }
  __this_02 = (IMMNELPBGIF->fields).ONPNAGNAPOL;
  if (__this_02 != (UnityEngine_AnimationClip_o *)0x0) {
    UnityEngine_AnimationClip__set_wrapMode
              (__this_02,(IMMNELPBGIF->fields).BGDPMAEHOIC,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_AnimationEvent_o *)
                thunk_FUN_01bda818(UnityEngine_AnimationEvent_TypeInfo);
    UnityEngine_AnimationEvent___ctor(__this_00,(MethodInfo *)0x0);
    value = UnityEngine_AnimationClip__get_length(__this_02,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_AnimationEvent_o *)0x0) {
      UnityEngine_AnimationEvent__set_time(__this_00,value,(MethodInfo *)0x0);
      UnityEngine_AnimationEvent__set_functionName(__this_00,StringLiteral_2973,(MethodInfo *)0x0);
      UnityEngine_AnimationClip__AddEvent(__this_02,__this_00,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._animator;
      if (pUVar4 != (UnityEngine_Animation_o *)0x0) {
        x = UnityEngine_Animation__get_clip(pUVar4,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar4 = (__this->fields)._animator;
          if (pUVar4 == (UnityEngine_Animation_o *)0x0) goto LAB_036d1028;
          UnityEngine_Animation__set_clip(pUVar4,__this_02,(MethodInfo *)0x0);
        }
        pUVar4 = (__this->fields)._animator;
        if (pUVar4 != (UnityEngine_Animation_o *)0x0) {
          UnityEngine_Animation__AddClip
                    (pUVar4,__this_02,(IMMNELPBGIF->fields).HHADPFIIKIG,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>_Add__;
          local_50.fields.KCLMKBAMNPA = (IMMNELPBGIF->fields).KCLMKBAMNPA;
          local_50.fields.HHADPFIIKIG = (IMMNELPBGIF->fields).HHADPFIIKIG;
          local_50.fields.BGDPMAEHOIC = (IMMNELPBGIF->fields).BGDPMAEHOIC;
          local_50.fields._28_4_ = *(undefined4 *)&(IMMNELPBGIF->fields).field_0x1c;
          local_50.fields.ONPNAGNAPOL = (IMMNELPBGIF->fields).ONPNAGNAPOL;
          __this_01 = (__this->fields).IHPLPDKKAEK;
          if (__this_01 != (System_Collections_Generic_List_UnityAnimator_PNHHAMAIIAB__o *)0x0) {
            pUVar5 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pUVar5 != (UnityAnimator_PNHHAMAIIAB_array *)0x0) {
              uVar1 = (__this_01->fields)._size;
              if (uVar1 < (uint)pUVar5->max_length) {
                (__this_01->fields)._size = uVar1 + 1;
                pUVar5->m_Items[(int)uVar1].fields.KCLMKBAMNPA = local_50.fields.KCLMKBAMNPA;
                pUVar5->m_Items[(int)uVar1].fields.HHADPFIIKIG = local_50.fields.HHADPFIIKIG;
                pUVar5->m_Items[(int)uVar1].fields.BGDPMAEHOIC = local_50.fields.BGDPMAEHOIC;
                *(undefined4 *)&pUVar5->m_Items[(int)uVar1].fields.field_0x1c =
                     local_50.fields._28_4_;
                pUVar5->m_Items[(int)uVar1].fields.ONPNAGNAPOL = local_50.fields.ONPNAGNAPOL;
                thunk_FUN_01c20e04(pUVar5->m_Items + (int)uVar1,0);
              }
              else {
                System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>__AddWithResize
                          (__this_01,&local_50,
                           *(MethodInfo_2797B84 **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_036d1028:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

