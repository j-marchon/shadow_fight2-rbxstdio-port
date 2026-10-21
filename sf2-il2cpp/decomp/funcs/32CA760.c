// Nekki.SF2.GUI.Tutorial.TutorialNode$$Start @ RVA 0x32CA760

void Nekki_SF2_GUI_Tutorial_TutorialNode__Start
               (Nekki_SF2_GUI_Tutorial_TutorialNode_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_List_TutorialNode__o *__this_00;
  System_String_o *pSVar4;
  System_Object_array *args;
  long lVar5;
  undefined8 uVar6;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar7;
  Nekki_SF2_GUI_Tutorial_TutorialNode_array *pNVar8;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o **ppNVar9;
  
  if ((DAT_04567515 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInParent<TutorialNode>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GPEHLCDLNDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>_Add__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_13978);
    DAT_04567515 = 1;
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    pNVar7 = (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0;
    if (bVar2) {
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar3 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_033ca9f4;
      pNVar7 = (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)
               UnityEngine_Component__GetComponentInParent<object>
                         ((UnityEngine_Component_o *)pUVar3,
                          Method_UnityEngine_Component_GetComponentInParent<TutorialNode>__);
    }
    if (__this != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) {
      ppNVar9 = &(__this->fields).MKAAKGJNBHI;
      *ppNVar9 = pNVar7;
      thunk_FUN_01c20e04(ppNVar9);
      pNVar7 = *ppNVar9;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      lVar5 = Method_System_Collections_Generic_List<TutorialNode>_Add__;
      if (bVar2) {
        if ((*ppNVar9 == (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) ||
           (__this_00 = ((*ppNVar9)->fields).EOIPAPCMGGF,
           __this_00 == (System_Collections_Generic_List_TutorialNode__o *)0x0)) goto LAB_033ca9f4;
        pNVar8 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pNVar8 == (Nekki_SF2_GUI_Tutorial_TutorialNode_array *)0x0) goto LAB_033ca9f4;
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pNVar8->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pNVar8->m_Items[(int)uVar1] = __this;
          thunk_FUN_01c20e04(pNVar8->m_Items + (int)uVar1,__this);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        if ((GPEHLCDLNDL_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        GPEHLCDLNDL__LNENELMPIOG(__this,(MethodInfo *)0x0);
      }
      bVar2 = System_String__IsNullOrEmpty((__this->fields)._ID,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar4 = (__this->fields)._ID;
        if (pSVar4 == (System_String_o *)0x0) goto LAB_033ca9f4;
        bVar2 = System_String__Contains(pSVar4,0x2e,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
      }
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        pSVar4 = (__this->fields)._ID;
        if ((pSVar4 != (System_String_o *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0))
        {
          uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar6,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar4;
          thunk_FUN_01c20e04(args->m_Items,pSVar4);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_13978,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_033ca9f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

