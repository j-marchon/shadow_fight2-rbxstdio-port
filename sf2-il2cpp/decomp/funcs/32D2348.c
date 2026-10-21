// OOMEDFCGKJB$$JMIAPNDCAIB @ RVA 0x32D2348

void OOMEDFCGKJB__JMIAPNDCAIB(OOMEDFCGKJB_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_BCGLDKLKKDA__o *GGBBGNMJIEI;
  JOAIBHHONIM_o *__this_00;
  System_Action_T__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar2;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar3;
  System_Collections_Generic_List_BCGLDKLKKDA__o *pSVar4;
  
  if ((DAT_04567560 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&JOAIBHHONIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
    FUN_01bab630(&Method_OOMEDFCGKJB_CNNFJGBBIOG__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_04567560 = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).KGDHODNEEFI;
  pNVar3 = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pSVar4 = (__this->fields).DKPBPBKGKCK;
  if (pSVar4 != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
    if ((pSVar4->fields)._size < 1) {
      return;
    }
    GGBBGNMJIEI = (System_Collections_Generic_List_BCGLDKLKKDA__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)GGBBGNMJIEI,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar4,
               Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
    __this_00 = (JOAIBHHONIM_o *)thunk_FUN_01bda818(JOAIBHHONIM_TypeInfo);
    JOAIBHHONIM___ctor(__this_00,GGBBGNMJIEI,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).DKPBPBKGKCK;
    if (pSVar4 != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
      length = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
      pNVar3 = JJPNLEPEAFM__HMCOHIKNIJP(__this_00,(MethodInfo *)0x0);
      (__this->fields).KGDHODNEEFI = pNVar3;
      thunk_FUN_01c20e04(ppNVar2,pNVar3);
      pNVar3 = (__this->fields).KGDHODNEEFI;
      IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar3 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
        Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                  ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)pNVar3,0,IELDNEAAPBE,
                   Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

