// Nekki.SF2.GUI.Common.Hints.HintList$$JCDGMAEDFIF @ RVA 0x3515E30

void Nekki_SF2_GUI_Common_Hints_HintList__JCDGMAEDFIF
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t BMPJIDHGCBN,
               System_String_o *LOAHEPDBFAO,int32_t CGLFKKMBHCN,MethodInfo *method)

{
  int iVar1;
  System_Object_array *args;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *__this_01;
  undefined8 uVar5;
  MethodInfo *method_00;
  System_String_o **ppSVar6;
  int32_t local_34;
  
  method_00 = (MethodInfo *)LOAHEPDBFAO;
  if ((DAT_04568929 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ODLJFAIHELG_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ODLJFAIHELG>_Invoke__);
    FUN_01bab630(&StringLiteral_15486);
    DAT_04568929 = 1;
  }
  iVar1 = (__this->fields)._TrackingDeviceID;
  if ((iVar1 == -1) || (iVar1 != BMPJIDHGCBN)) {
    return;
  }
  ppSVar6 = &(__this->fields).OHENCPAHBDH;
  *ppSVar6 = LOAHEPDBFAO;
  thunk_FUN_01c20e04(ppSVar6,LOAHEPDBFAO);
  Nekki_SF2_GUI_Common_Hints_HintList__LMKOIEJBCLO(__this,CGLFKKMBHCN,method_00);
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((__this_00 == (UnityEngine_Object_o *)0x0) ||
     (pSVar2 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0),
     args == (System_Object_array *)0x0)) {
LAB_0361602c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pSVar2 != (System_String_o *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_03616030:
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)pSVar2;
    thunk_FUN_01c20e04(args->m_Items,pSVar2);
    pSVar2 = *ppSVar6;
    if ((pSVar2 != (System_String_o *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
    goto LAB_03616030;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pSVar2);
      local_34 = (__this->fields).AKOLAICNIJF;
      pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(ODLJFAIHELG_TypeInfo,&local_34);
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_03616030;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar4;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar4);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogFormat(StringLiteral_15486,args,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._OnHintSchemeChanged;
        if (__this_01 != (Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *)0x0) {
          UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,(__this->fields).AKOLAICNIJF,
                     Method_UnityEngine_Events_UnityEvent<ODLJFAIHELG>_Invoke__);
          return;
        }
        goto LAB_0361602c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

