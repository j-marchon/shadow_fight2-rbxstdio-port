// TypeDefIndex 3454
// Namespace: 
// public abstract class CIOBNDOOGIM
// Fields:
//   private static bool DHKAODBNGNJ; // 0x0
//   private static readonly List<CIOBNDOOGIM> NHFIIOFLEOA; // 0x8
//   private CIOBNDOOGIM.LPLHHDAAAIP <EMOONAKLCBH>k__BackingField; // 0x10

// ===== protected virtual void GDCHAJOJGBH()  [RVA 0x356781C]
// CIOBNDOOGIM$$GDCHAJOJGBH @ RVA 0x356781C

void CIOBNDOOGIM__GDCHAJOJGBH(CIOBNDOOGIM_o *__this,MethodInfo *method)

{
  (__this->fields)._EMOONAKLCBH_k__BackingField = 0;
  return;
}


// ===== private static void BBPJEPAGOLO(DBMPKPJGIPI ACCIHBHMFPN)  [RVA 0x3567824]
// CIOBNDOOGIM$$BBPJEPAGOLO @ RVA 0x3567824

void CIOBNDOOGIM__BBPJEPAGOLO(int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Predicate_CIOBNDOOGIM__o **ppSVar2;
  System_Collections_Generic_List_object__o *__this;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_CIOBNDOOGIM__o *__this_00;
  System_Predicate_CIOBNDOOGIM__o *match;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568c00 & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CIOBNDOOGIM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CIOBNDOOGIM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CIOBNDOOGIM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_GetEnumerator__);
    FUN_01bab630(&System_Predicate<CIOBNDOOGIM>_TypeInfo);
    FUN_01bab630(&Method_CIOBNDOOGIM_<>c_MJIOCHNMFAK__);
    FUN_01bab630(&CIOBNDOOGIM_<>c_TypeInfo);
    DAT_04568c00 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (DAT_04568c10 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo,method);
    DAT_04568c10 = '\x01';
  }
  if (Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_NMINHOHPEAD_k__BackingField ==
      false) {
    if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CIOBNDOOGIM_TypeInfo);
    }
    __this_00 = CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
    if ((CIOBNDOOGIM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    match = CIOBNDOOGIM_<>c_TypeInfo->static_fields->__9__6_0;
    if (match == (System_Predicate_CIOBNDOOGIM__o *)0x0) {
      if ((CIOBNDOOGIM_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = (System_Predicate_CIOBNDOOGIM__o *)
              thunk_FUN_01bda818(System_Predicate<CIOBNDOOGIM>_TypeInfo);
      System_Predicate<object>___ctor();
      ppSVar2 = &CIOBNDOOGIM_<>c_TypeInfo->static_fields->__9__6_0;
      *ppSVar2 = match;
      thunk_FUN_01c20e04(ppSVar2,match);
    }
    if ((__this_00 == (System_Collections_Generic_List_CIOBNDOOGIM__o *)0x0) ||
       (__this = (System_Collections_Generic_List_object__o *)
                 System_Collections_Generic_List<object>__FindAll
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (System_Predicate_T__o *)match,
                            Method_System_Collections_Generic_List<CIOBNDOOGIM>_FindAll__),
       __this == (System_Collections_Generic_List_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,__this,Method_System_Collections_Generic_List<CIOBNDOOGIM>_GetEnumerator__)
    ;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<CIOBNDOOGIM>_MoveNext__
                             ), bVar1) {
      if (local_48.fields._current != (Il2CppObject *)0x0) {
        (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                  (local_48.fields._current,(local_48.fields._current)->klass->vtable[4].method);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<CIOBNDOOGIM>_Dispose__);
  }
  return;
}


// ===== private void ALDJDKJONCI(CIOBNDOOGIM.LPLHHDAAAIP CJNHFNHJHPE)  [RVA 0x3567AA4]
// CIOBNDOOGIM$$ALDJDKJONCI @ RVA 0x3567AA4

void CIOBNDOOGIM__ALDJDKJONCI(CIOBNDOOGIM_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._EMOONAKLCBH_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public static bool AADDOLFCFNJ()  [RVA 0x3567AAC]
// CIOBNDOOGIM$$AADDOLFCFNJ @ RVA 0x3567AAC

bool CIOBNDOOGIM__AADDOLFCFNJ(MethodInfo *method)

{
  bool bVar1;
  System_Predicate_CIOBNDOOGIM__o **ppSVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_CIOBNDOOGIM__o *__this;
  System_Predicate_CIOBNDOOGIM__o *match;
  
  if ((DAT_04568c01 & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_get_Count__);
    FUN_01bab630(&System_Predicate<CIOBNDOOGIM>_TypeInfo);
    FUN_01bab630(&Method_CIOBNDOOGIM_<>c_GPMMIDJICCP__);
    FUN_01bab630(&CIOBNDOOGIM_<>c_TypeInfo);
    DAT_04568c01 = 1;
  }
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
  if (__this != (System_Collections_Generic_List_CIOBNDOOGIM__o *)0x0) {
    if ((__this->fields)._size < 1) {
      bVar1 = false;
    }
    else {
      if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        __this = CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
      }
      if ((CIOBNDOOGIM_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = CIOBNDOOGIM_<>c_TypeInfo->static_fields->__9__4_0;
      if (match == (System_Predicate_CIOBNDOOGIM__o *)0x0) {
        if ((CIOBNDOOGIM_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        match = (System_Predicate_CIOBNDOOGIM__o *)
                thunk_FUN_01bda818(System_Predicate<CIOBNDOOGIM>_TypeInfo);
        System_Predicate<object>___ctor();
        ppSVar2 = &CIOBNDOOGIM_<>c_TypeInfo->static_fields->__9__4_0;
        *ppSVar2 = match;
        thunk_FUN_01c20e04(ppSVar2,match);
      }
      if (__this == (System_Collections_Generic_List_CIOBNDOOGIM__o *)0x0) goto LAB_03667c1c;
      pIVar3 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this,
                          (System_Predicate_T__o *)match,
                          Method_System_Collections_Generic_List<CIOBNDOOGIM>_Find__);
      bVar1 = pIVar3 != (Il2CppObject *)0x0;
    }
    return bVar1;
  }
LAB_03667c1c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3567C20]
// CIOBNDOOGIM$$.cctor @ RVA 0x3567C20

void CIOBNDOOGIM___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_CIOBNDOOGIM__o *__this;
  System_Collections_Generic_List_CIOBNDOOGIM__o **ppSVar1;
  
  if ((DAT_04568c02 & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CIOBNDOOGIM>_TypeInfo);
    DAT_04568c02 = 1;
  }
  __this = (System_Collections_Generic_List_CIOBNDOOGIM__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<CIOBNDOOGIM>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<CIOBNDOOGIM>__ctor__);
  ppSVar1 = &CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}


// ===== private static void BHLHBBKAFHH()  [RVA 0x3567CB0]
// CIOBNDOOGIM$$BHLHBBKAFHH @ RVA 0x3567CB0

void CIOBNDOOGIM__BHLHBBKAFHH(MethodInfo *method)

{
  System_Predicate_CIOBNDOOGIM__o **ppSVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_CIOBNDOOGIM__o *__this;
  System_Predicate_CIOBNDOOGIM__o *match;
  
  if ((DAT_04568c03 & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_Find__);
    FUN_01bab630(&System_Predicate<CIOBNDOOGIM>_TypeInfo);
    FUN_01bab630(&Method_CIOBNDOOGIM_<>c_OKPDINOGDBD__);
    FUN_01bab630(&CIOBNDOOGIM_<>c_TypeInfo);
    DAT_04568c03 = 1;
  }
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CIOBNDOOGIM_TypeInfo);
  }
  __this = CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
  if ((CIOBNDOOGIM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  match = CIOBNDOOGIM_<>c_TypeInfo->static_fields->__9__5_0;
  if (match == (System_Predicate_CIOBNDOOGIM__o *)0x0) {
    if ((CIOBNDOOGIM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    match = (System_Predicate_CIOBNDOOGIM__o *)
            thunk_FUN_01bda818(System_Predicate<CIOBNDOOGIM>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &CIOBNDOOGIM_<>c_TypeInfo->static_fields->__9__5_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (__this != (System_Collections_Generic_List_CIOBNDOOGIM__o *)0x0) {
    pIVar2 = System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)__this,
                        (System_Predicate_T__o *)match,
                        Method_System_Collections_Generic_List<CIOBNDOOGIM>_Find__);
    if (pIVar2 != (Il2CppObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03667de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pIVar2->klass->vtable[4].methodPtr)(pIVar2,pIVar2->klass->vtable[4].method);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void OCBMEPOCFHH()  [RVA 0x3567E00]
// CIOBNDOOGIM$$OCBMEPOCFHH @ RVA 0x3567E00

void CIOBNDOOGIM__OCBMEPOCFHH(MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  NDPMLPGANCI_o *__this;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_00;
  CIOBNDOOGIM_StaticFields *pCVar1;
  
  if ((DAT_04568c04 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_CIOBNDOOGIM_BBPJEPAGOLO__);
    FUN_01bab630(&Method_CIOBNDOOGIM_BHLHBBKAFHH__);
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04568c04 = 1;
  }
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar1 = CIOBNDOOGIM_TypeInfo->static_fields;
  if (pCVar1->DHKAODBNGNJ != false) {
    return;
  }
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pCVar1 = CIOBNDOOGIM_TypeInfo->static_fields;
  }
  pCVar1->DHKAODBNGNJ = true;
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE_00 =
       (System_Action_DBMPKPJGIPI__o *)thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__FKFIIDIJIEI(__this,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool NCIMLFNLCJJ()  [RVA 0x3567F60]
// CIOBNDOOGIM$$NCIMLFNLCJJ @ RVA 0x3567F60

bool CIOBNDOOGIM__NCIMLFNLCJJ(CIOBNDOOGIM_o *__this,MethodInfo *method)

{
  return (__this->fields)._EMOONAKLCBH_k__BackingField != 0;
}


// ===== public CIOBNDOOGIM.LPLHHDAAAIP JJCBMHPBNBK()  [RVA 0x3567F70]
// CIOBNDOOGIM$$JJCBMHPBNBK @ RVA 0x3567F70

int32_t CIOBNDOOGIM__JJCBMHPBNBK(CIOBNDOOGIM_o *__this,MethodInfo *method)

{
  return (__this->fields)._EMOONAKLCBH_k__BackingField;
}


// ===== public static void ADMCIAPJFAC()  [RVA 0x3567F78]
// CIOBNDOOGIM$$ADMCIAPJFAC @ RVA 0x3567F78

void CIOBNDOOGIM__ADMCIAPJFAC(MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  NDPMLPGANCI_o *__this;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_00;
  CIOBNDOOGIM_StaticFields *pCVar1;
  
  if ((DAT_04568c05 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_CIOBNDOOGIM_BBPJEPAGOLO__);
    FUN_01bab630(&Method_CIOBNDOOGIM_BHLHBBKAFHH__);
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04568c05 = 1;
  }
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar1 = CIOBNDOOGIM_TypeInfo->static_fields;
  if (pCVar1->DHKAODBNGNJ != false) {
    if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pCVar1 = CIOBNDOOGIM_TypeInfo->static_fields;
    }
    pCVar1->DHKAODBNGNJ = false;
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
    __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE_00 =
         (System_Action_DBMPKPJGIPI__o *)thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (__this != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__ILJKHKMFKAJ(__this,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void .ctor()  [RVA 0x35680E0]
// CIOBNDOOGIM$$.ctor @ RVA 0x35680E0

void CIOBNDOOGIM___ctor(CIOBNDOOGIM_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  CIOBNDOOGIM_c *method_00;
  System_Collections_Generic_List_CIOBNDOOGIM__o *__this_00;
  CIOBNDOOGIM_array *pCVar3;
  
  if ((DAT_04568c06 & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_Add__);
    DAT_04568c06 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  method_00 = CIOBNDOOGIM_TypeInfo;
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CIOBNDOOGIM_c *)thunk_FUN_01ba7564();
  }
  CIOBNDOOGIM__OCBMEPOCFHH((MethodInfo *)method_00);
  lVar2 = Method_System_Collections_Generic_List<CIOBNDOOGIM>_Add__;
  __this_00 = CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
  if (__this_00 != (System_Collections_Generic_List_CIOBNDOOGIM__o *)0x0) {
    pCVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pCVar3 != (CIOBNDOOGIM_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pCVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pCVar3->m_Items[(int)uVar1] = __this;
        thunk_FUN_01c20e04(pCVar3->m_Items + (int)uVar1,__this);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CLNAOMIIBLH()  [RVA 0x35681C4]
// CIOBNDOOGIM$$CLNAOMIIBLH @ RVA 0x35681C4

void CIOBNDOOGIM__CLNAOMIIBLH(CIOBNDOOGIM_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CIOBNDOOGIM__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568c07 & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_Remove__);
    DAT_04568c07 = 1;
    method = extraout_x1;
  }
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CIOBNDOOGIM_TypeInfo,method);
  }
  __this_00 = CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
  if (__this_00 != (System_Collections_Generic_List_CIOBNDOOGIM__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
               Method_System_Collections_Generic_List<CIOBNDOOGIM>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BHFGGAKKJKP(bool ECDLGJPEBEF = False)  [RVA 0x3568244]
// CIOBNDOOGIM$$BHFGGAKKJKP @ RVA 0x3568244

void CIOBNDOOGIM__BHFGGAKKJKP(CIOBNDOOGIM_o *__this,bool ECDLGJPEBEF,MethodInfo *method)

{
  if (ECDLGJPEBEF) {
                    /* WARNING: Could not recover jumptable at 0x03668250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._4_GDCHAJOJGBH.methodPtr)
              (__this,(__this->klass->vtable)._4_GDCHAJOJGBH.method);
    return;
  }
  (__this->fields)._EMOONAKLCBH_k__BackingField = 1;
  return;
}

