// TypeDefIndex 2199
// Namespace: 
// public class CPNGAIGLKNJ : PMFNDKKBEKN
// Fields:

// ===== public void CJPBDILAGKD()  [RVA 0x32E6978]
// CPNGAIGLKNJ$$CJPBDILAGKD @ RVA 0x32E6978

void CPNGAIGLKNJ__CJPBDILAGKD(CPNGAIGLKNJ_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  OOMHDDBCBJP__JDGBDDAIJNK((OOMHDDBCBJP_o *)__this,2,(MethodInfo *)0x0);
  CPNGAIGLKNJ__DKLLPGPGPPM(__this,1,method_00);
  return;
}


// ===== public override void FAFFJKFGMAL()  [RVA 0x32E6A50]
// CPNGAIGLKNJ$$FAFFJKFGMAL @ RVA 0x32E6A50

void CPNGAIGLKNJ__FAFFJKFGMAL(CPNGAIGLKNJ_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  OOMHDDBCBJP__FAFFJKFGMAL((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
  CPNGAIGLKNJ__POIJKLDPMGB(__this,method_00);
  return;
}


// ===== public override void NMAPGPBDPAN(AFFHKININGD FBFPLEFCDOK)  [RVA 0x32E6AA8]
// CPNGAIGLKNJ$$NMAPGPBDPAN @ RVA 0x32E6AA8

void CPNGAIGLKNJ__NMAPGPBDPAN(CPNGAIGLKNJ_o *__this,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  OLKPEJMEBPJ_o *__this_00;
  System_Collections_Generic_List_AFFHKININGD__o *__this_01;
  int32_t iVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567613 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_04567613 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).super.super.LFJPDELEIHG;
  if (__this_00 == (OLKPEJMEBPJ_o *)0x0) {
    iVar2 = 1;
  }
  else {
    iVar2 = OLKPEJMEBPJ__MMDJGCICIFP(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).super.super.HDDNEKLMLMF;
  if (__this_01 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    iVar4 = 1;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        return;
      }
      if ((AFFHKININGD_o *)local_48.fields._current == FBFPLEFCDOK) break;
      iVar4 = iVar4 + 1;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
      iVar3 = 1;
      if (iVar2 <= iVar4) {
        iVar3 = 2;
      }
      (FBFPLEFCDOK->fields).HHJIJKJCEOF = iVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override uint KDENPABEMHA(FNLLFBNCKBG MNPKIDDPNBM)  [RVA 0x32E6C28]
// CPNGAIGLKNJ$$KDENPABEMHA @ RVA 0x32E6C28

uint32_t CPNGAIGLKNJ__KDENPABEMHA(CPNGAIGLKNJ_o *__this,int32_t MNPKIDDPNBM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  uint32_t uVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567614 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_04567614 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).super.super.HDDNEKLMLMF;
  if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
  uVar2 = 0;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__)
      ;
      return uVar2;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) break;
    if (*(int *)((long)&local_48.fields._current[6].klass + 4) == MNPKIDDPNBM) {
      uVar2 = uVar2 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(string ACCIHBHMFPN, Vector2 BLEOKMIDGIK, string KGLJICLJHEL, string NEJHIEOHMCF, string FNLBOLFNLPP, string ONLOEDAIEOJ, ushort JDIHKNKFJMK, ushort EHEFEIEKHJO, string JCLPIKHEKBB, string JEHFOBHMGJM, string LBKOHHHPNIP, string FNLFDPAJACB, string OAJJFDIDFKC, string JOPFAAGCIOI, bool MENLMNJNMMO)  [RVA 0x32E6D78]
// CPNGAIGLKNJ$$.ctor @ RVA 0x32E6D78

void CPNGAIGLKNJ___ctor(CPNGAIGLKNJ_o *__this,System_String_o *ACCIHBHMFPN,
                       UnityEngine_Vector2_o BLEOKMIDGIK,System_String_o *KGLJICLJHEL,
                       System_String_o *NEJHIEOHMCF,System_String_o *FNLBOLFNLPP,
                       System_String_o *ONLOEDAIEOJ,uint16_t JDIHKNKFJMK,uint16_t EHEFEIEKHJO,
                       System_String_o *JCLPIKHEKBB,System_String_o *JEHFOBHMGJM,
                       System_String_o *LBKOHHHPNIP,System_String_o *FNLFDPAJACB,
                       System_String_o *OAJJFDIDFKC,System_String_o *JOPFAAGCIOI,bool MENLMNJNMMO,
                       MethodInfo *method)

{
  PMFNDKKBEKN___ctor((PMFNDKKBEKN_o *)__this,ACCIHBHMFPN,BLEOKMIDGIK,KGLJICLJHEL,NEJHIEOHMCF,
                     FNLBOLFNLPP,ONLOEDAIEOJ,JDIHKNKFJMK,EHEFEIEKHJO,JCLPIKHEKBB,JEHFOBHMGJM,
                     LBKOHHHPNIP,FNLFDPAJACB,OAJJFDIDFKC,JOPFAAGCIOI,MENLMNJNMMO,(MethodInfo *)0x0);
  return;
}


// ===== public void DKLLPGPGPPM(int CJNHFNHJHPE)  [RVA 0x32E699C]
// CPNGAIGLKNJ$$DKLLPGPGPPM @ RVA 0x32E699C

void CPNGAIGLKNJ__DKLLPGPGPPM(CPNGAIGLKNJ_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  OLKPEJMEBPJ_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  
  if ((DAT_04567615 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567615 = 1;
  }
  __this_00 = (__this->fields).super.super.LFJPDELEIHG;
  if (__this_00 != (OLKPEJMEBPJ_o *)0x0) {
    OLKPEJMEBPJ__KPFJEDDJKKH(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_01 != (ACHLOMELAJE_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int NIKIMDGHLDA(AFFHKININGD FBFPLEFCDOK)  [RVA 0x32E6DAC]
// CPNGAIGLKNJ$$NIKIMDGHLDA @ RVA 0x32E6DAC

int32_t CPNGAIGLKNJ__NIKIMDGHLDA
                  (CPNGAIGLKNJ_o *__this,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567616 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_04567616 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).super.super.HDDNEKLMLMF;
  if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
  iVar2 = 0;
  while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_48,
                            Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__
                           ), bVar1) {
    if ((AFFHKININGD_o *)local_48.fields._current == FBFPLEFCDOK) goto LAB_033e6e68;
    iVar2 = iVar2 + 1;
  }
  iVar2 = -1;
LAB_033e6e68:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
  return iVar2;
}


// ===== public void POIJKLDPMGB()  [RVA 0x32E6A6C]
// CPNGAIGLKNJ$$POIJKLDPMGB @ RVA 0x32E6A6C

void CPNGAIGLKNJ__POIJKLDPMGB(CPNGAIGLKNJ_o *__this,MethodInfo *method)

{
  int CJNHFNHJHPE;
  OLKPEJMEBPJ_o *__this_00;
  MethodInfo *in_x2;
  
  __this_00 = (__this->fields).super.super.LFJPDELEIHG;
  if (__this_00 == (OLKPEJMEBPJ_o *)0x0) {
    CJNHFNHJHPE = 1;
  }
  else {
    CJNHFNHJHPE = OLKPEJMEBPJ__MMDJGCICIFP(__this_00,(MethodInfo *)0x0);
    if (CJNHFNHJHPE < 1) goto LAB_033e6a9c;
  }
  CJNHFNHJHPE = CJNHFNHJHPE + -1;
LAB_033e6a9c:
  CPNGAIGLKNJ__DKLLPGPGPPM(__this,CJNHFNHJHPE,in_x2);
  return;
}


// ===== public override void PEOJNPEINED()  [RVA 0x32E6F14]
// CPNGAIGLKNJ$$PEOJNPEINED @ RVA 0x32E6F14

void CPNGAIGLKNJ__PEOJNPEINED(CPNGAIGLKNJ_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  PMFNDKKBEKN__PEOJNPEINED((PMFNDKKBEKN_o *)__this,(MethodInfo *)0x0);
  CPNGAIGLKNJ__DHFOHJPHKOL(__this,method_00);
  return;
}


// ===== public void DHFOHJPHKOL()  [RVA 0x32E6F30]
// CPNGAIGLKNJ$$DHFOHJPHKOL @ RVA 0x32E6F30

void CPNGAIGLKNJ__DHFOHJPHKOL(CPNGAIGLKNJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  OLKPEJMEBPJ_o *__this_00;
  System_Collections_Generic_List_AFFHKININGD__o *__this_01;
  undefined4 uVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567617 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_04567617 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).super.super.KANKFCNHDPA == false) {
    (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
              (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
  }
  __this_00 = (__this->fields).super.super.LFJPDELEIHG;
  if (__this_00 == (OLKPEJMEBPJ_o *)0x0) {
    iVar2 = 1;
  }
  else {
    iVar2 = OLKPEJMEBPJ__MMDJGCICIFP(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).super.super.HDDNEKLMLMF;
  if (__this_01 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    iVar4 = 1;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        return;
      }
      if (iVar4 < iVar2) {
        if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar3 = 1;
      }
      else {
        if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar3 = 2;
      }
      *(undefined4 *)((long)&local_48.fields._current[6].klass + 4) = uVar3;
      iVar4 = iVar4 + 1;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GCLAOPLJHBB()  [RVA 0x32E6EFC]
// CPNGAIGLKNJ$$GCLAOPLJHBB @ RVA 0x32E6EFC

int32_t CPNGAIGLKNJ__GCLAOPLJHBB(CPNGAIGLKNJ_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OLKPEJMEBPJ_o *__this_00;
  
  __this_00 = (__this->fields).super.super.LFJPDELEIHG;
  if (__this_00 != (OLKPEJMEBPJ_o *)0x0) {
    iVar1 = OLKPEJMEBPJ__MMDJGCICIFP(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  return 1;
}


// ===== public void FAKEAOEBMGK(AFFHKININGD FBFPLEFCDOK)  [RVA 0x32E70D8]
// CPNGAIGLKNJ$$FAKEAOEBMGK @ RVA 0x32E70D8

void CPNGAIGLKNJ__FAKEAOEBMGK(CPNGAIGLKNJ_o *__this,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CPNGAIGLKNJ__NIKIMDGHLDA(__this,FBFPLEFCDOK,method);
                    /* try { // try from 033e70e4 to 034e746b has its CatchHandler @ 033e70e4
                       catch() { ... } // from try @ 033e70e4 with catch @ 033e70e4
                       catch() { ... } // from try @ 033e74e0 with catch @ 033e70e4
                       catch() { ... } // from try @ 033e7610 with catch @ 033e70e4
                       catch() { ... } // from try @ 033e763c with catch @ 033e70e4
                       catch() { ... } // from try @ 033e7670 with catch @ 033e70e4 */
  if (-1 < iVar1) {
    CPNGAIGLKNJ__DKLLPGPGPPM(__this,iVar1 + 2,method);
    return;
  }
  return;
}

