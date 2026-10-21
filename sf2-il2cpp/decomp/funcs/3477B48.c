// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard.OIMJFDFDMMM$$ToString @ RVA 0x3477B48

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM__ToString
          (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *__this,
          MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  int32_t local_4c;
  int32_t local_48;
  int32_t local_44;
  undefined1 local_40 [4];
  int32_t local_3c;
  int64_t local_38;
  
                    /* catch() { ... } // from try @ 035779e8 with catch @ 03577b48 */
                    /* try { // try from 03577b5c to 03677b5f has its CatchHandler @ 03577b84 */
                    /* try { // try from 03577b60 to 03677b8b has its CatchHandler @ 03577498 */
  if ((DAT_04568334 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
                    /* catch() { ... } // from try @ 03577b5c with catch @ 03577b84 */
                    /* try { // try from 03577b8c to 03677b9f has its CatchHandler @ 03577c5c */
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
                    /* catch() { ... } // from try @ 0357787c with catch @ 03577ba0
                       try { // try from 03577ba0 to 03677bc3 has its CatchHandler @ 03577498 */
                    /* catch() { ... } // from try @ 03577870 with catch @ 03577ba4 */
    FUN_01bab630(&object___TypeInfo);
                    /* catch() { ... } // from try @ 03577aec with catch @ 03577ba8 */
                    /* catch() { ... } // from try @ 03577808 with catch @ 03577bac */
                    /* catch() { ... } // from try @ 035777ac with catch @ 03577bb0 */
    FUN_01bab630(&StringLiteral_10272);
                    /* catch() { ... } // from try @ 03577ac0 with catch @ 03577bb4 */
    DAT_04568334 = 1;
  }
                    /* try { // try from 03577bc4 to 03677bc7 has its CatchHandler @ 03577bd8 */
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,7);
  local_38 = (__this->fields).AACMAAOJMFK;
                    /* catch() { ... } // from try @ 03577bc4 with catch @ 03577bd8 */
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_38);
                    /* try { // try from 03577be0 to 03677c47 has its CatchHandler @ 03577c5c */
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pIVar1 != (Il2CppObject *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
LAB_03577e0c:
    uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar3,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar1;
    thunk_FUN_01c20e04(args->m_Items,pIVar1);
    pSVar4 = (__this->fields).JIJLBFGKNJK;
    if ((pSVar4 != (System_String_o *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar2 == 0))
    goto LAB_03577e0c;
    if (1 < (uint)args->max_length) {
                    /* try { // try from 03577c48 to 03677c53 has its CatchHandler @ 03577498 */
      args->m_Items[1] = (Il2CppObject *)pSVar4;
                    /* try { // try from 03577c54 to 03677c5b has its CatchHandler @ 03577c5c */
      thunk_FUN_01c20e04(args->m_Items + 1,pSVar4);
      local_3c = (__this->fields).HHOPNIKFJNE;
                    /* catch() { ... } // from try @ 03577ad4 with catch @ 03577c5c
                       catch() { ... } // from try @ 03577b8c with catch @ 03577c5c
                       catch() { ... } // from try @ 03577be0 with catch @ 03577c5c
                       catch() { ... } // from try @ 03577c54 with catch @ 03577c5c */
      pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_03577e0c;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar1;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar1);
        local_40[0] = (__this->fields).HJPOJOPKEKI;
        pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_40);
        if ((pIVar1 != (Il2CppObject *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        goto LAB_03577e0c;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar1;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar1);
          local_44 = (__this->fields).FPNOLDAJPGK;
          pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
          if ((pIVar1 != (Il2CppObject *)0x0) &&
             (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0
             )) goto LAB_03577e0c;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = pIVar1;
            thunk_FUN_01c20e04(args->m_Items + 4,pIVar1);
            local_48 = (__this->fields).LFBJGJJBBGE;
            pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
            if ((pIVar1 != (Il2CppObject *)0x0) &&
               (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class),
               lVar2 == 0)) goto LAB_03577e0c;
            if (5 < (uint)args->max_length) {
              args->m_Items[5] = pIVar1;
              thunk_FUN_01c20e04(args->m_Items + 5,pIVar1);
              local_4c = (__this->fields).NEKMDLBLENC;
              pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_4c);
              if ((pIVar1 != (Il2CppObject *)0x0) &&
                 (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class),
                 lVar2 == 0)) goto LAB_03577e0c;
              if (6 < (uint)args->max_length) {
                args->m_Items[6] = pIVar1;
                thunk_FUN_01c20e04(args->m_Items + 6,pIVar1);
                pSVar4 = System_String__Format(StringLiteral_10272,args,(MethodInfo *)0x0);
                return pSVar4;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

