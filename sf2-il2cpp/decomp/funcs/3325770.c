// PNLFHHJGDLI$$ODFHMBHFNJB @ RVA 0x3325770

void PNLFHHJGDLI__ODFHMBHFNJB(System_String_o *HHMEIAPHDCI,bool LPDDIIOAIOO,MethodInfo *method)

{
  bool bVar1;
  PNLFHHJGDLI_c *method_00;
  System_String_o *pSVar2;
  UnityEngine_AudioClip_o *NCALFHMFKLE;
  System_Object_array *args;
  long lVar3;
  System_String_o **ppSVar4;
  undefined8 uVar5;
  MethodInfo *in_x4;
  System_String_o *str0;
  
  if ((DAT_04567874 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_9260);
    FUN_01bab630(&StringLiteral_19980);
    DAT_04567874 = 1;
  }
  method_00 = PNLFHHJGDLI_TypeInfo;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PNLFHHJGDLI_c *)thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__KBEJCDBMEBA((MethodInfo *)method_00);
  if (HHMEIAPHDCI == (System_String_o *)0x0) goto LAB_03425a50;
  str0 = PNLFHHJGDLI_TypeInfo->static_fields->FHAAJJAKNEJ;
  pSVar2 = System_String__Substring
                     (HHMEIAPHDCI,(HHMEIAPHDCI->fields)._stringLength + -3,3,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_19980,(MethodInfo *)0x0);
  if (bVar1) {
LAB_03425888:
    pSVar2 = System_String__Concat(str0,HHMEIAPHDCI,(MethodInfo *)0x0);
  }
  else {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (MGENAMAJALB_TypeInfo->static_fields->ACGDPPPMKBM != false) goto LAB_03425888;
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = System_String__Concat
                       (str0,HHMEIAPHDCI,PNLFHHJGDLI_TypeInfo->static_fields->CAFEPKICHPK,
                        (MethodInfo *)0x0);
  }
  NCALFHMFKLE = CMEBCBKGFFL__GEIPHOGLKAG(pSVar2,(MethodInfo *)0x0);
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
  }
  Nekki_Audio_AudioManager__AddAudio(NCALFHMFKLE,HHMEIAPHDCI,1.0,(MethodInfo *)0x0);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__MEHGLNCEAAG
            (PNLFHHJGDLI_TypeInfo->static_fields->EEFDLAHNJHL,HHMEIAPHDCI,LPDDIIOAIOO,
             PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK,1.0,1.0,in_x4);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)NCALFHMFKLE,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045678de == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_045678de = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar4 = &PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField;
    *ppSVar4 = HHMEIAPHDCI;
    thunk_FUN_01c20e04(ppSVar4,HHMEIAPHDCI);
    return;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args != (System_Object_array *)0x0) {
    if ((pSVar2 != (System_String_o *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)pSVar2;
      thunk_FUN_01c20e04(args->m_Items,pSVar2);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_9260,args,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03425a50:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

