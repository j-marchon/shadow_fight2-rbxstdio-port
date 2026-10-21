// DebugSimpleScroll$$LFENGGKOJDO @ RVA 0x3595968

void DebugSimpleScroll__LFENGGKOJDO(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  System_String_o *pSVar4;
  System_Object_array *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar6;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar7;
  UnityEngine_Object_o *__this_00;
  uint uVar8;
  int local_34;
  
  if ((DAT_04568d9b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<Text>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<BaseScrollItem>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_171);
    FUN_01bab630(&StringLiteral_18911);
    FUN_01bab630(&StringLiteral_645);
    DAT_04568d9b = 1;
    method = extraout_x1;
  }
  pNVar7 = (__this->fields)._scrollItemPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  pNVar7 = (Nekki_SF2_GUI_BaseScrollItem_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pNVar7,Method_UnityEngine_Object_Instantiate<BaseScrollItem>__
                     );
  pNVar3 = DebugSimpleScroll__CKPKMBBIMOP(__this,method_00);
  if ((pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (lVar6 = *(long *)&(pNVar3->fields)._snapEase, lVar6 != 0)) {
    local_34 = *(int *)(lVar6 + 0x18) + 1;
    pSVar4 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(StringLiteral_171,pSVar4,(MethodInfo *)0x0);
    if (pNVar7 != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
      UnityEngine_Object__set_name((UnityEngine_Object_o *)pNVar7,pSVar4,(MethodInfo *)0x0);
      pNVar3 = DebugSimpleScroll__CKPKMBBIMOP(__this,method_01);
      if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__AddItem(pNVar3,pNVar7,true,(MethodInfo *)0x0);
        pSVar5 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)pNVar7,
                            Method_UnityEngine_Component_GetComponentsInChildren<Text>__);
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar1 = (uint)pSVar5->max_length;
          if (0 < (int)uVar1) {
            uVar8 = 0;
            do {
              if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              __this_00 = (UnityEngine_Object_o *)pSVar5->m_Items[(int)uVar8];
              if ((__this_00 == (UnityEngine_Object_o *)0x0) ||
                 (pSVar4 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0),
                 pSVar4 == (System_String_o *)0x0)) goto LAB_03695b64;
              pSVar4 = System_String__ToLower(pSVar4,(MethodInfo *)0x0);
              bVar2 = System_String__op_Equality(pSVar4,StringLiteral_18911,(MethodInfo *)0x0);
              if (bVar2) {
                pSVar4 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                pSVar4 = System_String__Concat(StringLiteral_645,pSVar4,(MethodInfo *)0x0);
                (*__this_00->klass[4]._1.gc_desc)(__this_00,pSVar4,__this_00->klass[4]._1.name);
              }
              uVar1 = (uint)pSVar5->max_length;
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)uVar1);
          }
          return;
        }
      }
    }
  }
LAB_03695b64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

