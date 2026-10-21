// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$SelectTabWithChannel @ RVA 0x3253FEC

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__SelectTabWithChannel
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int32_t BOFAKAEIMME,
               MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *__this_00;
  FEKEAPCCOOB_o *pFVar5;
  TabView_o *x;
  System_String_o *pSVar6;
  int DPJIDNBJIBG;
  System_Enum_o local_68;
  int32_t local_58;
  
  if ((DAT_0456714f & 1) == 0) {
    FUN_01bab630(&CKLIGNAPKFO_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_ContainsKey__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12790);
    FUN_01bab630(&StringLiteral_1112);
    DAT_0456714f = 1;
  }
  __this_00 = (__this->fields).KGPGGBPLEFB;
  if (__this_00 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)0x0
     ) {
    bVar3 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       BOFAKAEIMME,
                       Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_ContainsKey__
                      );
    if (bVar3) {
      pFVar5 = (__this->fields).HIOOMAJPEJP;
      if (pFVar5 == (FEKEAPCCOOB_o *)0x0) goto LAB_0335421c;
      iVar1 = (pFVar5->fields).GEKOMLGOJOP;
      iVar4 = FEKEAPCCOOB__KPOBFGCNFAG(pFVar5,(MethodInfo *)0x0);
      if (0 < iVar4) {
        DPJIDNBJIBG = 0;
        do {
          pFVar5 = (__this->fields).HIOOMAJPEJP;
          if (pFVar5 == (FEKEAPCCOOB_o *)0x0) goto LAB_0335421c;
          x = FEKEAPCCOOB__IDLJKBJEEHF(pFVar5,DPJIDNBJIBG,(MethodInfo *)0x0);
          if (x != (TabView_o *)0x0) {
            bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo->_2).naturalAligment;
            if (((x->klass->_2).naturalAligment < bVar2) ||
               ((x->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(x);
            }
          }
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                            );
          if (!bVar3) {
            if (x == (TabView_o *)0x0) goto LAB_0335421c;
            if (*(int *)&x[1].monitor == BOFAKAEIMME) {
              if (iVar1 == DPJIDNBJIBG) {
                return;
              }
              pFVar5 = (__this->fields).HIOOMAJPEJP;
              if (pFVar5 != (FEKEAPCCOOB_o *)0x0) {
                FEKEAPCCOOB__AAOLKEFFIIN(pFVar5,DPJIDNBJIBG,(MethodInfo *)0x0);
                return;
              }
              goto LAB_0335421c;
            }
          }
          DPJIDNBJIBG = DPJIDNBJIBG + 1;
        } while (iVar4 != DPJIDNBJIBG);
      }
    }
    else {
      local_68.klass = (System_Enum_c *)CKLIGNAPKFO_TypeInfo;
      local_68.monitor = (void *)0xffffffffffffffff;
      local_58 = BOFAKAEIMME;
      pSVar6 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat
                         (StringLiteral_12790,pSVar6,StringLiteral_1112,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
    }
                    /* try { // try from 033541e4 to 03454367 has its CatchHandler @ 033541e4
                       catch() { ... } // from try @ 033541e4 with catch @ 033541e4
                       catch() { ... } // from try @ 03354560 with catch @ 033541e4
                       catch() { ... } // from try @ 03354690 with catch @ 033541e4
                       catch() { ... } // from try @ 03354698 with catch @ 033541e4
                       catch() { ... } // from try @ 0335478c with catch @ 033541e4 */
    return;
  }
LAB_0335421c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

