// TypeDefIndex 699
// Namespace: 
// public class FJNIPMODEPO : EOJBGBDLBKJ, IDisposable
// Fields:
//   private bool ANHKEJLOCNB; // 0x10
//   private bool ECCPBJGMNPE; // 0x11
//   private readonly CompositeDisposable BNAIPPCOGPE; // 0x18
//   private readonly CPHBJEDCAEO HEEHMDOOMIO; // 0x20

// ===== public void .ctor(CPHBJEDCAEO LPBPGPJICKO)  [RVA 0x3034898]
// FJNIPMODEPO$$.ctor @ RVA 0x3034898

void FJNIPMODEPO___ctor(FJNIPMODEPO_o *__this,CPHBJEDCAEO_o *LPBPGPJICKO,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  CPHBJEDCAEO_o **ppCVar2;
  
  if ((DAT_04565d2f & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_04565d2f = 1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).HEEHMDOOMIO;
  *ppCVar2 = LPBPGPJICKO;
  thunk_FUN_01c20e04(ppCVar2,LPBPGPJICKO);
  return;
}


// ===== public bool FOKJFEHKKPJ()  [RVA 0x3034920]
// FJNIPMODEPO$$FOKJFEHKKPJ @ RVA 0x3034920

bool FJNIPMODEPO__FOKJFEHKKPJ(FJNIPMODEPO_o *__this,MethodInfo *method)

{
  return true;
}


// ===== private void OAIAFKMMCFB(Action JLPMKKKMANE)  [RVA 0x3034928]
// FJNIPMODEPO$$OAIAFKMMCFB @ RVA 0x3034928

void FJNIPMODEPO__OAIAFKMMCFB(FJNIPMODEPO_o *__this,System_Action_o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  CPHBJEDCAEO_c *pCVar3;
  ulong uVar4;
  int32_t *piVar5;
  CPHBJEDCAEO_o *pCVar6;
  
  if ((DAT_04565d30 & 1) == 0) {
    FUN_01bab630(&CPHBJEDCAEO_TypeInfo);
    DAT_04565d30 = 1;
  }
  pCVar6 = (__this->fields).HEEHMDOOMIO;
  if (pCVar6 == (CPHBJEDCAEO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar3 = pCVar6->klass;
  uVar1._0_1_ = (pCVar3->_2).rank;
  uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pCVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)CPHBJEDCAEO_TypeInfo) {
        pVVar2 = pCVar3->vtable + (*piVar5 + 2);
        goto LAB_031349b8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar6,CPHBJEDCAEO_TypeInfo,2);
LAB_031349b8:
                    /* WARNING: Could not recover jumptable at 0x031349cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pCVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== public void ACNFBPJGBDP(string CEHOJOFLMFF)  [RVA 0x30349D4]
// FJNIPMODEPO$$ACNFBPJGBDP @ RVA 0x30349D4

void FJNIPMODEPO__ACNFBPJGBDP(FJNIPMODEPO_o *__this,System_String_o *CEHOJOFLMFF,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *in_x3;
  
  if ((DAT_04565d31 & 1) == 0) {
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
    FUN_01bab630(&StringLiteral_3008/*"AppVersion"*/);
    DAT_04565d31 = 1;
  }
  if ((__this->fields).ECCPBJGMNPE != false) {
    FJNIPMODEPO__BNEHJLHGBCD(__this,StringLiteral_3008/*"AppVersion"*/,CEHOJOFLMFF,in_x3);
    return;
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar1 = &FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MBNNPFMBPOD;
  *ppSVar1 = CEHOJOFLMFF;
  thunk_FUN_01c20e04(ppSVar1,CEHOJOFLMFF);
  return;
}


// ===== public void EHAJCBIIBKB(string NFDKMBAGHPD)  [RVA 0x3034B1C]
// FJNIPMODEPO$$EHAJCBIIBKB @ RVA 0x3034B1C

void FJNIPMODEPO__EHAJCBIIBKB(FJNIPMODEPO_o *__this,System_String_o *NFDKMBAGHPD,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *in_x3;
  
  if ((DAT_04565d32 & 1) == 0) {
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
    FUN_01bab630(&StringLiteral_8320/*"Language"*/);
    DAT_04565d32 = 1;
  }
  if ((__this->fields).ECCPBJGMNPE != false) {
    FJNIPMODEPO__BNEHJLHGBCD(__this,StringLiteral_8320/*"Language"*/,NFDKMBAGHPD,in_x3);
    return;
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar1 = &FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->AHAKHHLCPAB;
  *ppSVar1 = NFDKMBAGHPD;
  thunk_FUN_01c20e04(ppSVar1,NFDKMBAGHPD);
  return;
}


// ===== private void EJCCNALLMGH(Action JLPMKKKMANE)  [RVA 0x3034BB4]
// FJNIPMODEPO$$EJCCNALLMGH @ RVA 0x3034BB4

void FJNIPMODEPO__EJCCNALLMGH(FJNIPMODEPO_o *__this,System_Action_o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  CPHBJEDCAEO_c *pCVar3;
  ulong uVar4;
  int32_t *piVar5;
  CPHBJEDCAEO_o *pCVar6;
  
  if ((DAT_04565d33 & 1) == 0) {
    FUN_01bab630(&CPHBJEDCAEO_TypeInfo);
    DAT_04565d33 = 1;
  }
  pCVar6 = (__this->fields).HEEHMDOOMIO;
  if (pCVar6 == (CPHBJEDCAEO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar3 = pCVar6->klass;
  uVar1._0_1_ = (pCVar3->_2).rank;
  uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pCVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)CPHBJEDCAEO_TypeInfo) {
        pVVar2 = pCVar3->vtable + (*piVar5 + 4);
        goto LAB_03134c44;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
                    /* try { // try from 03134c20 to 03234d63 has its CatchHandler @ 03134c20
                       catch() { ... } // from try @ 03134c20 with catch @ 03134c20
                       catch() { ... } // from try @ 03134e88 with catch @ 03134c20
                       catch() { ... } // from try @ 03134ff8 with catch @ 03134c20
                       catch() { ... } // from try @ 0313503c with catch @ 03134c20
                       catch() { ... } // from try @ 03135070 with catch @ 03134c20
                       catch() { ... } // from try @ 03135108 with catch @ 03134c20 */
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar6,CPHBJEDCAEO_TypeInfo,4);
LAB_03134c44:
                    /* WARNING: Could not recover jumptable at 0x03134c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pCVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void IBCEAIKMPAB(Unit HOKBHLPPCAH)  [RVA 0x3034C60]
// FJNIPMODEPO$$IBCEAIKMPAB @ RVA 0x3034C60

void FJNIPMODEPO__IBCEAIKMPAB(FJNIPMODEPO_o *__this)

{
  uint length;
  int32_t length_00;
  bool bVar1;
  System_String_o **ppSVar2;
  FJNIPMODEPO_AIMMBNHMBFL_c *pFVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method;
  MethodInfo *method_00;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Collections_Generic_List_Exception__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o SStack_80;
  System_Collections_Generic_List_Enumerator_T__o SStack_68;
  System_Collections_Generic_List_Enumerator_T__o SStack_50;
  
  if ((DAT_04565d35 & 1) == 0) {
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Exception>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Exception>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Exception>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Exception>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Exception>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Exception>_get_Count__);
    FUN_01bab630(&StringLiteral_9867/*"OnFirebaseInitializeComplete: update data started."*/);
    DAT_04565d35 = 1;
  }
  method_00 = (MethodInfo *)0x0;
  SStack_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_50.fields._index = 0;
  SStack_50.fields._version = 0;
  SStack_50.fields._current = (Il2CppObject *)0x0;
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._current = (Il2CppObject *)0x0;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_9867/*"OnFirebaseInitializeComplete: update data started."*/,(MethodInfo *)0x0);
  (__this->fields).ECCPBJGMNPE = true;
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = System_String__IsNullOrEmpty
                    (FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->IBNPINKJBPI,(MethodInfo *)0x0)
  ;
  if (!bVar1) {
    if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    FJNIPMODEPO__HBFCADLMGIN
              (__this,FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->IBNPINKJBPI,method_00);
    FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->IBNPINKJBPI = (System_String_o *)0x0;
    thunk_FUN_01c20e04(FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields,0);
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = System_String__IsNullOrEmpty
                    (FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MBNNPFMBPOD,(MethodInfo *)0x0)
  ;
  if (!bVar1) {
    if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    FJNIPMODEPO__ACNFBPJGBDP
              (__this,FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MBNNPFMBPOD,method_00);
    ppSVar2 = &FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MBNNPFMBPOD;
    *ppSVar2 = (System_String_o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = System_String__IsNullOrEmpty
                    (FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->AHAKHHLCPAB,(MethodInfo *)0x0)
  ;
  method = extraout_x1;
  if (!bVar1) {
    if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    FJNIPMODEPO__EHAJCBIIBKB
              (__this,FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->AHAKHHLCPAB,method_00);
    ppSVar2 = &FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->AHAKHHLCPAB;
    *ppSVar2 = (System_String_o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
    method = extraout_x1_00;
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_01;
  }
  pFVar3 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo;
  if (FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->IPKJCIHKIMI != false) {
    FJNIPMODEPO__IPKJCIHKIMI(__this,method);
    if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar3 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo;
    FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->IPKJCIHKIMI = false;
  }
  if ((pFVar3->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pFVar3 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo;
  }
  pSVar4 = pFVar3->static_fields->GBNPHBNELMF;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    if (0 < (pSVar4->fields)._size) {
      if ((pFVar3->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pSVar4 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->GBNPHBNELMF;
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_031350b8;
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&SStack_80,(System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<string>_GetEnumerator__);
      SStack_50.fields._index = SStack_80.fields._index;
      SStack_50.fields._version = SStack_80.fields._version;
      SStack_50.fields._list = SStack_80.fields._list;
      SStack_50.fields._current = SStack_80.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&SStack_50,
                                Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                               ), bVar1) {
        FJNIPMODEPO__DHAAGKPHJLA(__this,(System_String_o *)SStack_50.fields._current,method_00);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&SStack_50,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar3 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo;
      pSVar4 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->GBNPHBNELMF;
      if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_031350b8;
      length = (pSVar4->fields)._size;
      method_00 = (MethodInfo *)(ulong)length;
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (0 < (int)length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
        pFVar3 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo;
      }
    }
    if ((pFVar3->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pFVar3 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo;
    }
    pSVar5 = pFVar3->static_fields->MMPNIPJGIDD;
    if (pSVar5 != (System_Collections_Generic_List_Exception__o *)0x0) {
      if (0 < (pSVar5->fields)._size) {
        if ((pFVar3->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pSVar5 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MMPNIPJGIDD;
          if (pSVar5 == (System_Collections_Generic_List_Exception__o *)0x0) goto LAB_031350b8;
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&SStack_68,(System_Collections_Generic_List_object__o *)pSVar5,
                   Method_System_Collections_Generic_List<Exception>_GetEnumerator__);
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&SStack_68,
                                  Method_System_Collections_Generic_List_Enumerator<Exception>_MoveNext__
                                 ), bVar1) {
          FJNIPMODEPO__EECHNLMEMEF(__this,(System_Exception_o *)SStack_68.fields._current,method_00)
          ;
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&SStack_68,Method_System_Collections_Generic_List_Enumerator<Exception>_Dispose__
                  );
        if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MMPNIPJGIDD;
        if (pSVar5 == (System_Collections_Generic_List_Exception__o *)0x0) goto LAB_031350b8;
        length_00 = (pSVar5->fields)._size;
        (pSVar5->fields)._size = 0;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (0 < length_00) {
          System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length_00,
                              (MethodInfo *)0x0);
        }
      }
      return;
    }
  }
LAB_031350b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Dispose()  [RVA 0x3035190]
// FJNIPMODEPO$$Dispose @ RVA 0x3035190

void FJNIPMODEPO__Dispose(FJNIPMODEPO_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  if ((DAT_04565d34 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422/*"Dispose"*/);
                    /* try { // try from 031351bc to 0323529f has its CatchHandler @ 031351bc
                       catch() { ... } // from try @ 031351bc with catch @ 031351bc
                       catch() { ... } // from try @ 0313538c with catch @ 031351bc
                       catch() { ... } // from try @ 03135464 with catch @ 031351bc
                       catch() { ... } // from try @ 031354c8 with catch @ 031351bc */
    DAT_04565d34 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422/*"Dispose"*/,(MethodInfo *)0x0);
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void MCDLIDHMCPJ()  [RVA 0x3034C64]
// FJNIPMODEPO$$MCDLIDHMCPJ @ RVA 0x3034C64

void FJNIPMODEPO__MCDLIDHMCPJ(FJNIPMODEPO_o *__this,MethodInfo *method)

{
  uint length;
  int32_t length_00;
  bool bVar1;
  System_String_o **ppSVar2;
  FJNIPMODEPO_AIMMBNHMBFL_c *pFVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Collections_Generic_List_Exception__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04565d35 & 1) == 0) {
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Exception>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Exception>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Exception>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Exception>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Exception>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Exception>_get_Count__);
    FUN_01bab630(&StringLiteral_9867/*"OnFirebaseInitializeComplete: update data started."*/);
    DAT_04565d35 = 1;
  }
  method_01 = (MethodInfo *)0x0;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_9867/*"OnFirebaseInitializeComplete: update data started."*/,(MethodInfo *)0x0);
                    /* try { // try from 03134d64 to 03234d67 has its CatchHandler @ 031350b8 */
  (__this->fields).ECCPBJGMNPE = true;
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03134d78 to 03234d7b has its CatchHandler @ 031350bc */
    thunk_FUN_01ba7564();
                    /* try { // try from 03134d7c to 03234d83 has its CatchHandler @ 031350b4 */
  }
  bVar1 = System_String__IsNullOrEmpty
                    (FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->IBNPINKJBPI,(MethodInfo *)0x0)
  ;
  if (!bVar1) {
                    /* try { // try from 03134d94 to 03234d9f has its CatchHandler @ 031350bc */
    if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03134da8 to 03234dc3 has its CatchHandler @ 031350b0 */
    FJNIPMODEPO__HBFCADLMGIN
              (__this,FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->IBNPINKJBPI,method_01);
    FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->IBNPINKJBPI = (System_String_o *)0x0;
    thunk_FUN_01c20e04(FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields,0);
  }
                    /* try { // try from 03134dd4 to 03234de3 has its CatchHandler @ 031350ac */
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = System_String__IsNullOrEmpty
                    (FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MBNNPFMBPOD,(MethodInfo *)0x0)
  ;
                    /* try { // try from 03134df8 to 03234dfb has its CatchHandler @ 03135098 */
  if (!bVar1) {
    if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03134e10 to 03234e23 has its CatchHandler @ 03134ffc */
    FJNIPMODEPO__ACNFBPJGBDP
              (__this,FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MBNNPFMBPOD,method_01);
    ppSVar2 = &FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MBNNPFMBPOD;
    *ppSVar2 = (System_String_o *)0x0;
                    /* try { // try from 03134e30 to 03234e33 has its CatchHandler @ 03135084 */
    thunk_FUN_01c20e04(ppSVar2,0);
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03134e40 to 03234e47 has its CatchHandler @ 0313509c */
    thunk_FUN_01ba7564();
  }
  bVar1 = System_String__IsNullOrEmpty
                    (FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->AHAKHHLCPAB,(MethodInfo *)0x0)
  ;
  method_00 = extraout_x1;
  if (!bVar1) {
                    /* try { // try from 03134e60 to 03234e63 has its CatchHandler @ 03135080 */
    if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 03134e6c to 03234e6f has its CatchHandler @ 0313507c */
    }
                    /* try { // try from 03134e78 to 03234e7b has its CatchHandler @ 03135078 */
    FJNIPMODEPO__EHAJCBIIBKB
              (__this,FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->AHAKHHLCPAB,method_01);
                    /* try { // try from 03134e80 to 03234e87 has its CatchHandler @ 03134ff8 */
                    /* try { // try from 03134e88 to 03234fdb has its CatchHandler @ 03134c20 */
    ppSVar2 = &FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->AHAKHHLCPAB;
    *ppSVar2 = (System_String_o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
    method_00 = extraout_x1_00;
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_01;
  }
  pFVar3 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo;
  if (FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->IPKJCIHKIMI != false) {
    FJNIPMODEPO__IPKJCIHKIMI(__this,method_00);
    if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar3 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo;
    FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->IPKJCIHKIMI = false;
  }
  if ((pFVar3->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pFVar3 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo;
  }
  pSVar4 = pFVar3->static_fields->GBNPHBNELMF;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    if (0 < (pSVar4->fields)._size) {
      if ((pFVar3->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pSVar4 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->GBNPHBNELMF;
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_031350b8;
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_80,(System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<string>_GetEnumerator__);
      local_50.fields._index = local_80.fields._index;
      local_50.fields._version = local_80.fields._version;
      local_50.fields._list = local_80.fields._list;
      local_50.fields._current = local_80.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                               ), bVar1) {
        FJNIPMODEPO__DHAAGKPHJLA(__this,(System_String_o *)local_50.fields._current,method_01);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar3 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo;
      pSVar4 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->GBNPHBNELMF;
      if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_031350b8;
      length = (pSVar4->fields)._size;
      method_01 = (MethodInfo *)(ulong)length;
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (0 < (int)length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
        pFVar3 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo;
      }
    }
    if ((pFVar3->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pFVar3 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo;
    }
                    /* try { // try from 03134fdc to 03234ff3 has its CatchHandler @ 03135074 */
    pSVar5 = pFVar3->static_fields->MMPNIPJGIDD;
    if (pSVar5 != (System_Collections_Generic_List_Exception__o *)0x0) {
      if (0 < (pSVar5->fields)._size) {
                    /* try { // try from 03134ff4 to 03234ff7 has its CatchHandler @ 03135078 */
        if ((pFVar3->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03134e80 with catch @ 03134ff8
                       try { // try from 03134ff8 to 03235017 has its CatchHandler @ 03134c20 */
          thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 03134e10 with catch @ 03134ffc */
          pSVar5 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MMPNIPJGIDD;
          if (pSVar5 == (System_Collections_Generic_List_Exception__o *)0x0) goto LAB_031350b8;
        }
                    /* try { // try from 03135018 to 0323502f has its CatchHandler @ 03135064 */
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_68,(System_Collections_Generic_List_object__o *)pSVar5,
                   Method_System_Collections_Generic_List<Exception>_GetEnumerator__);
                    /* try { // try from 03135038 to 0323503b has its CatchHandler @ 03135060 */
                    /* try { // try from 0313503c to 0323504f has its CatchHandler @ 03134c20 */
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_68,
                                  Method_System_Collections_Generic_List_Enumerator<Exception>_MoveNext__
                                 ), bVar1) {
          FJNIPMODEPO__EECHNLMEMEF(__this,(System_Exception_o *)local_68.fields._current,method_01);
                    /* try { // try from 03135050 to 0323505f has its CatchHandler @ 03135064 */
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_68,Method_System_Collections_Generic_List_Enumerator<Exception>_Dispose__)
        ;
                    /* catch() { ... } // from try @ 03135038 with catch @ 03135060 */
                    /* catch() { ... } // from try @ 03135018 with catch @ 03135064
                       catch() { ... } // from try @ 03135050 with catch @ 03135064 */
        if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0313506c to 0323506f has its CatchHandler @ 0313513c */
          thunk_FUN_01ba7564();
                    /* try { // try from 03135070 to 032350db has its CatchHandler @ 03134c20 */
        }
                    /* catch() { ... } // from try @ 03134fdc with catch @ 03135074 */
                    /* catch() { ... } // from try @ 03134e78 with catch @ 03135078
                       catch() { ... } // from try @ 03134ff4 with catch @ 03135078 */
        pSVar5 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MMPNIPJGIDD;
                    /* catch() { ... } // from try @ 03134e6c with catch @ 0313507c */
        if (pSVar5 == (System_Collections_Generic_List_Exception__o *)0x0) goto LAB_031350b8;
                    /* catch() { ... } // from try @ 03134e60 with catch @ 03135080 */
        length_00 = (pSVar5->fields)._size;
                    /* catch() { ... } // from try @ 03134e30 with catch @ 03135084 */
        (pSVar5->fields)._size = 0;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (0 < length_00) {
                    /* catch() { ... } // from try @ 03134df8 with catch @ 03135098 */
                    /* catch() { ... } // from try @ 03134e40 with catch @ 0313509c */
          System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length_00,
                              (MethodInfo *)0x0);
        }
      }
                    /* catch() { ... } // from try @ 03134dd4 with catch @ 031350ac */
                    /* catch() { ... } // from try @ 03134da8 with catch @ 031350b0 */
                    /* catch() { ... } // from try @ 03134d7c with catch @ 031350b4 */
      return;
    }
  }
LAB_031350b8:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03134d64 with catch @ 031350b8 */
  FUN_01bab8c8();
}


// ===== public void EECHNLMEMEF(Exception BPKHJMDEHED)  [RVA 0x30355AC]
// FJNIPMODEPO$$EECHNLMEMEF @ RVA 0x30355AC

void FJNIPMODEPO__EECHNLMEMEF
               (FJNIPMODEPO_o *__this,System_Exception_o *BPKHJMDEHED,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_Exception__o *__this_00;
  System_Exception_array *pSVar3;
  
  if ((DAT_04565d36 & 1) == 0) {
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Exception>_Add__);
    DAT_04565d36 = 1;
  }
  if ((__this->fields).ECCPBJGMNPE != false) {
    Firebase_Crashlytics_Crashlytics__LogException(BPKHJMDEHED,(MethodInfo *)0x0);
    return;
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = Method_System_Collections_Generic_List<Exception>_Add__;
  __this_00 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MMPNIPJGIDD;
  if (__this_00 != (System_Collections_Generic_List_Exception__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Exception_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = BPKHJMDEHED;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,BPKHJMDEHED);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)BPKHJMDEHED,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DHAAGKPHJLA(string IHNKCJHDDKD)  [RVA 0x30354B8]
// FJNIPMODEPO$$DHAAGKPHJLA @ RVA 0x30354B8

void FJNIPMODEPO__DHAAGKPHJLA(FJNIPMODEPO_o *__this,System_String_o *IHNKCJHDDKD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar3;
  
                    /* try { // try from 031354c0 to 032354c7 has its CatchHandler @ 031354dc */
                    /* try { // try from 031354c8 to 032354d3 has its CatchHandler @ 031351bc */
  if ((DAT_04565d37 & 1) == 0) {
                    /* try { // try from 031354d4 to 032354db has its CatchHandler @ 031354dc */
                    /* catch() { ... } // from try @ 031354c0 with catch @ 031354dc
                       catch() { ... } // from try @ 031354d4 with catch @ 031354dc */
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    DAT_04565d37 = 1;
  }
  if ((__this->fields).ECCPBJGMNPE != false) {
    Firebase_Crashlytics_Crashlytics__Log(IHNKCJHDDKD,(MethodInfo *)0x0);
    return;
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  __this_00 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->GBNPHBNELMF;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = IHNKCJHDDKD;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,IHNKCJHDDKD);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)IHNKCJHDDKD,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IPKJCIHKIMI()  [RVA 0x3035280]
// FJNIPMODEPO$$IPKJCIHKIMI @ RVA 0x3035280

void FJNIPMODEPO__IPKJCIHKIMI(FJNIPMODEPO_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *b;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Enum_o local_78;
  int32_t local_68;
  
                    /* try { // try from 031352a0 to 032352ab has its CatchHandler @ 03135484 */
  if ((DAT_04565d38 & 1) == 0) {
                    /* try { // try from 031352b0 to 032352b3 has its CatchHandler @ 03135480 */
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
                    /* try { // try from 031352c0 to 032352c7 has its CatchHandler @ 03135488 */
    FUN_01bab630(&UnityEngine_ApplicationInstallMode_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
                    /* try { // try from 031352d4 to 032352d7 has its CatchHandler @ 0313547c */
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
                    /* try { // try from 031352e0 to 032352e3 has its CatchHandler @ 03135478 */
    FUN_01bab630(&StringLiteral_12129/*"SignatureValid"*/);
                    /* try { // try from 031352ec to 032352ef has its CatchHandler @ 03135470 */
    FUN_01bab630(&StringLiteral_7577/*"InstallerID"*/);
                    /* try { // try from 031352f4 to 032352fb has its CatchHandler @ 03135464 */
    FUN_01bab630(&StringLiteral_5345/*"DeviceUID"*/);
    FUN_01bab630(&StringLiteral_7576/*"InstallMode"*/);
                    /* try { // try from 03135310 to 03235313 has its CatchHandler @ 03135474 */
    FUN_01bab630(&StringLiteral_13850/*"Token"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
                    /* try { // try from 0313532c to 03235333 has its CatchHandler @ 0313546c */
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04565d38 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).ECCPBJGMNPE == false) {
                    /* catch() { ... } // from try @ 031352ec with catch @ 03135470
                       catch() { ... } // from try @ 03135460 with catch @ 03135470 */
                    /* catch() { ... } // from try @ 03135310 with catch @ 03135474
                       catch() { ... } // from try @ 0313534c with catch @ 03135474
                       catch() { ... } // from try @ 03135388 with catch @ 03135474 */
                    /* catch() { ... } // from try @ 031352e0 with catch @ 03135478 */
                    /* catch() { ... } // from try @ 031352d4 with catch @ 0313547c */
                    /* catch() { ... } // from try @ 031352b0 with catch @ 03135480 */
    if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031352a0 with catch @ 03135484 */
      thunk_FUN_01ba7564(FJNIPMODEPO_AIMMBNHMBFL_TypeInfo,method);
                    /* catch() { ... } // from try @ 031352c0 with catch @ 03135488 */
    }
    FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->IPKJCIHKIMI = true;
  }
  else {
                    /* try { // try from 0313534c to 0323534f has its CatchHandler @ 03135474 */
                    /* try { // try from 03135354 to 03235367 has its CatchHandler @ 03135468 */
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
    }
                    /* try { // try from 03135388 to 0323538b has its CatchHandler @ 03135474 */
                    /* try { // try from 0313538c to 0323545f has its CatchHandler @ 031351bc */
    pSVar3 = EOAOCPLIKOI__HBOAEIBACIE((MethodInfo *)0x0);
    FJNIPMODEPO__BNEHJLHGBCD(__this,StringLiteral_5345/*"DeviceUID"*/,pSVar3,in_x3);
    pSVar3 = EOAOCPLIKOI__IEBPOGDJCFL((MethodInfo *)0x0);
    FJNIPMODEPO__BNEHJLHGBCD(__this,StringLiteral_13850/*"Token"*/,pSVar3,in_x3);
    local_68 = SecurityManager__EDIGBEDHJED((MethodInfo *)0x0);
    local_78.klass = (System_Enum_c *)UnityEngine_ApplicationInstallMode_TypeInfo;
    local_78.monitor = (void *)0xffffffffffffffff;
    pSVar3 = System_Enum__ToString(&local_78,(MethodInfo *)0x0);
    FJNIPMODEPO__BNEHJLHGBCD(__this,StringLiteral_7576/*"InstallMode"*/,pSVar3,in_x3);
    pSVar3 = SecurityManager__NPJHCEDIIBA((MethodInfo *)0x0);
    FJNIPMODEPO__BNEHJLHGBCD(__this,StringLiteral_7577/*"InstallerID"*/,pSVar3,in_x3);
    pSVar3 = SecurityManager__CGFLLLNEFOE((MethodInfo *)0x0);
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo);
    }
    b = BHEDGAKGKPO__BPHEBPIMCIL((MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar3,b,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_1606/*"1"*/;
    if (!bVar2) {
      puVar1 = &StringLiteral_1567/*"0"*/;
    }
                    /* try { // try from 03135460 to 03235463 has its CatchHandler @ 03135470 */
                    /* catch() { ... } // from try @ 031352f4 with catch @ 03135464
                       try { // try from 03135464 to 0323549f has its CatchHandler @ 031351bc */
                    /* catch() { ... } // from try @ 03135354 with catch @ 03135468 */
    FJNIPMODEPO__BNEHJLHGBCD(__this,StringLiteral_12129/*"SignatureValid"*/,(System_String_o *)*puVar1,in_x3);
                    /* catch() { ... } // from try @ 0313532c with catch @ 0313546c */
  }
                    /* try { // try from 031354a0 to 032354a3 has its CatchHandler @ 031354b4 */
                    /* catch() { ... } // from try @ 031354a0 with catch @ 031354b4 */
  return;
}


// ===== public void GIMAJOGGBHM()  [RVA 0x30356A0]
// FJNIPMODEPO$$GIMAJOGGBHM @ RVA 0x30356A0

void FJNIPMODEPO__GIMAJOGGBHM(FJNIPMODEPO_o *__this,MethodInfo *method)

{
  System_Action_Action__o *addHandler;
  System_Action_Action__o *removeHandler;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  
  if ((DAT_04565d39 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_FJNIPMODEPO_EJCCNALLMGH__);
    FUN_01bab630(&Method_FJNIPMODEPO_IBCEAIKMPAB__);
    FUN_01bab630(&Method_FJNIPMODEPO_OAIAFKMMCFB__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    DAT_04565d39 = 1;
  }
  if ((__this->fields).ANHKEJLOCNB != false) {
    return;
  }
  (__this->fields).ANHKEJLOCNB = true;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529/*"Initialize"*/,(MethodInfo *)0x0);
  addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
  System_Action<object>___ctor();
  removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
  System_Action<object>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Unit>
                         ((System_IObservable_T__o *)source,onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).BNAIPPCOGPE,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}


// ===== public void HBFCADLMGIN(string MPMJDINCJNH)  [RVA 0x30351F8]
// FJNIPMODEPO$$HBFCADLMGIN @ RVA 0x30351F8

void FJNIPMODEPO__HBFCADLMGIN(FJNIPMODEPO_o *__this,System_String_o *MPMJDINCJNH,MethodInfo *method)

{
  if ((DAT_04565d3a & 1) == 0) {
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
    DAT_04565d3a = 1;
  }
  if ((__this->fields).ECCPBJGMNPE != false) {
    Firebase_Crashlytics_Crashlytics__SetUserId(MPMJDINCJNH,(MethodInfo *)0x0);
    return;
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->IBNPINKJBPI = MPMJDINCJNH;
  thunk_FUN_01c20e04(FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields,MPMJDINCJNH);
  return;
}


// ===== private void BNEHJLHGBCD(string PMACBPAMPJA, string CJNHFNHJHPE)  [RVA 0x3034A6C]
// FJNIPMODEPO$$BNEHJLHGBCD @ RVA 0x3034A6C

void FJNIPMODEPO__BNEHJLHGBCD
               (FJNIPMODEPO_o *__this,System_String_o *PMACBPAMPJA,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *JLNPKGGFFDD;
  
  if ((DAT_04565d3b & 1) == 0) {
    FUN_01bab630(&StringLiteral_11893/*"SetCustomKey: value for '"*/);
    FUN_01bab630(&StringLiteral_827/*"' is empty!"*/);
    DAT_04565d3b = 1;
  }
  bVar1 = System_String__IsNullOrWhiteSpace(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    JLNPKGGFFDD = System_String__Concat
                            (StringLiteral_11893/*"SetCustomKey: value for '"*/,PMACBPAMPJA,StringLiteral_827/*"' is empty!"*/,(MethodInfo *)0x0);
    KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
    return;
  }
  Firebase_Crashlytics_Crashlytics__SetCustomKey(PMACBPAMPJA,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

