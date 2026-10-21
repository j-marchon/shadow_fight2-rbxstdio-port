// Nekki.SF2.GUI.Profile.KeyIcon$$Instantiate @ RVA 0x3128A58

Nekki_SF2_GUI_Profile_KeyIcon_o *
Nekki_SF2_GUI_Profile_KeyIcon__Instantiate
          (int32_t EADCEBLKJEA,UnityEngine_GameObject_o *HMBLEHNKDIH,
          UnityEngine_Transform_o *JJHEGPBBMLG,MethodInfo *method)

{
  MGNDHCBAPEN_string__float__o *pMVar1;
  Nekki_SF2_GUI_Profile_KeyIcon_o *pNVar2;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  int32_t local_24;
  
  method_00 = (MethodInfo *)HMBLEHNKDIH;
  if ((DAT_04566673 & 1) == 0) {
    FUN_01bab630(&DMMJFKCBHEK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8251);
    DAT_04566673 = 1;
    method_00 = extraout_x1;
  }
  pMVar1 = Nekki_SF2_GUI_Profile_KeyIcon__FGJJDAHEGPF(EADCEBLKJEA,method_00);
  if (pMVar1 != (MGNDHCBAPEN_string__float__o *)0x0) {
    pNVar2 = Nekki_SF2_GUI_Profile_KeyIcon__Instantiate
                       ((pMVar1->fields).PHPELPFMOII,(pMVar1->fields).DOKHHBGJICA,HMBLEHNKDIH,
                        JJHEGPBBMLG,method);
    return pNVar2;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  local_24 = EADCEBLKJEA;
  pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(DMMJFKCBHEK_TypeInfo,&local_24);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pIVar3 != (Il2CppObject *)0x0) &&
     (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar3;
    thunk_FUN_01c20e04(args->m_Items,pIVar3);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_8251,args,(MethodInfo *)0x0);
    return (Nekki_SF2_GUI_Profile_KeyIcon_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

