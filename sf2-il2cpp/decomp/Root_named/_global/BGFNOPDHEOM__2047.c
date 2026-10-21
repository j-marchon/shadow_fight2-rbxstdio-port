// TypeDefIndex 2047
// Namespace: 
// public static class BGFNOPDHEOM
// Fields:
//   private static List<NLIDHEAMLMC> CNFEFGAGAMC; // 0x0
//   private static KKCLOOGGILP JPDBJAEDIEM; // 0x8

// ===== public static void DGLJCGNHLIG()  [RVA 0x32AAE3C]
// BGFNOPDHEOM$$DGLJCGNHLIG @ RVA 0x32AAE3C

void BGFNOPDHEOM__DGLJCGNHLIG(MethodInfo *method)

{
  int32_t length;
  BGFNOPDHEOM_StaticFields *pBVar1;
  System_Collections_Generic_List_NLIDHEAMLMC__o *pSVar2;
  
  if ((DAT_04567430 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_Clear__);
    DAT_04567430 = 1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pBVar1 = BGFNOPDHEOM_TypeInfo->static_fields;
  pSVar2 = pBVar1->CNFEFGAGAMC;
  if (pSVar2 != (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      pBVar1 = BGFNOPDHEOM_TypeInfo->static_fields;
    }
    pBVar1->JPDBJAEDIEM = -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static KKCLOOGGILP EKJPJBLGHMJ()  [RVA 0x32AAEDC]
// BGFNOPDHEOM$$EKJPJBLGHMJ @ RVA 0x32AAEDC

int32_t BGFNOPDHEOM__EKJPJBLGHMJ(MethodInfo *method)

{
  if ((DAT_04567431 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    DAT_04567431 = 1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return BGFNOPDHEOM_TypeInfo->static_fields->JPDBJAEDIEM;
}


// ===== public static NLIDHEAMLMC PFOBJKIPLCK(KKCLOOGGILP PCLEALHGACC)  [RVA 0x32AAF34]
// BGFNOPDHEOM$$PFOBJKIPLCK @ RVA 0x32AAF34

NLIDHEAMLMC_o * BGFNOPDHEOM__PFOBJKIPLCK(int32_t PCLEALHGACC,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  NLIDHEAMLMC_o *pNVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_NLIDHEAMLMC__o *pSVar4;
  int index;
  
  if ((DAT_04567432 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__);
    DAT_04567432 = 1;
    method = extraout_x1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BGFNOPDHEOM_TypeInfo,method);
  }
  pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
  if (pSVar4 == (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
LAB_033ab054:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (pSVar4->fields)._size;
  if (0 < iVar1) {
    index = 0;
    while( true ) {
      if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
      if ((pSVar4 == (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) ||
         (pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar4,index,
                              Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__),
         pIVar2 == (Il2CppObject *)0x0)) goto LAB_033ab054;
      if (*(int *)&pIVar2[1].klass == PCLEALHGACC) {
        if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
        if (pSVar4 != (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
          pNVar3 = (NLIDHEAMLMC_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar4,index,
                              Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__);
          return pNVar3;
        }
        goto LAB_033ab054;
      }
      if (iVar1 + -1 == index) break;
      index = index + 1;
    }
  }
  return (NLIDHEAMLMC_o *)0x0;
}


// ===== private static void .cctor()  [RVA 0x32AB058]
// BGFNOPDHEOM$$.cctor @ RVA 0x32AB058

void BGFNOPDHEOM___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_NLIDHEAMLMC__o *__this;
  
  if ((DAT_04567433 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NLIDHEAMLMC>_TypeInfo);
    DAT_04567433 = 1;
  }
  __this = (System_Collections_Generic_List_NLIDHEAMLMC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NLIDHEAMLMC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<NLIDHEAMLMC>__ctor__);
  BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC = __this;
  thunk_FUN_01c20e04(BGFNOPDHEOM_TypeInfo->static_fields,__this);
  BGFNOPDHEOM_TypeInfo->static_fields->JPDBJAEDIEM = -1;
  return;
}


// ===== public static Model EMHAFDFJFIA(GGFFOJJGHGP EJFPCGICJJB)  [RVA 0x32AB104]
// BGFNOPDHEOM$$EMHAFDFJFIA @ RVA 0x32AB104

Model_o * BGFNOPDHEOM__EMHAFDFJFIA(GGFFOJJGHGP_o *EJFPCGICJJB,MethodInfo *method)

{
  int32_t NAIJBCMHBFK;
  int32_t iVar1;
  Fight_o *__this;
  Model_o *pOVar2;
  MethodInfo *in_x2;
  
  if ((DAT_04567434 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04567434 = 1;
  }
  if (EJFPCGICJJB != (GGFFOJJGHGP_o *)0x0) {
    NAIJBCMHBFK = (*(EJFPCGICJJB->klass->vtable)._5_unknown.methodPtr)
                            (EJFPCGICJJB,(EJFPCGICJJB->klass->vtable)._5_unknown.method);
    iVar1 = (EJFPCGICJJB->fields).HLFBMBHOPMI;
    if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BGFNOPDHEOM_TypeInfo);
    }
    iVar1 = BGFNOPDHEOM__DGJLLOKIIMA(NAIJBCMHBFK,iVar1,in_x2);
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Fight_TypeInfo);
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (Fight_TypeInfo->static_fields->IGABFCCGLCO == (Fight_o *)0x0) {
      return (Model_o *)0x0;
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = Fight_TypeInfo->static_fields->IGABFCCGLCO;
    if (__this != (Fight_o *)0x0) {
      pOVar2 = Fight__BGOMMDMHFCJ(__this,iVar1,(MethodInfo *)0x0);
      return pOVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool KGGGJNCEPLF()  [RVA 0x32AB2E4]
// BGFNOPDHEOM$$KGGGJNCEPLF @ RVA 0x32AB2E4

bool BGFNOPDHEOM__KGGGJNCEPLF(MethodInfo *method)

{
  System_Collections_Generic_List_NLIDHEAMLMC__o *pSVar1;
  
  if ((DAT_04567435 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Count__);
    DAT_04567435 = 1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033ab32c to 034ab333 has its CatchHandler @ 033ab38c */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033ab334 to 034ab37f has its CatchHandler @ 033ab278 */
  pSVar1 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
  if (pSVar1 != (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
    return (pSVar1->fields)._size == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static NLIDHEAMLMC BGDJFKHKHDK(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP)  [RVA 0x32AB35C]
// BGFNOPDHEOM$$BGDJFKHKHDK @ RVA 0x32AB35C

NLIDHEAMLMC_o * BGFNOPDHEOM__BGDJFKHKHDK(int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  NLIDHEAMLMC_o *pNVar3;
  System_Collections_Generic_List_NLIDHEAMLMC__o *pSVar4;
  int index;
  
                    /* try { // try from 033ab380 to 034ab383 has its CatchHandler @ 033ab388 */
                    /* try { // try from 033ab384 to 034ab3a3 has its CatchHandler @ 033ab278 */
  if ((DAT_04567436 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ab380 with catch @ 033ab388
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ab32c with catch @ 033ab38c
                        */
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Count__);
                    /* try { // try from 033ab3a4 to 034ab3a7 has its CatchHandler @ 033ab3d0 */
                    /* try { // try from 033ab3a8 to 034ab3df has its CatchHandler @ 033ab278 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__);
    DAT_04567436 = 1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
                    /* catch() { ... } // from try @ 033ab3a4 with catch @ 033ab3d0 */
  if (pSVar4 == (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
LAB_033ab4c8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (pSVar4->fields)._size;
  if (0 < iVar1) {
                    /* try { // try from 033ab3e0 to 034ab3e7 has its CatchHandler @ 033ab3fc */
                    /* try { // try from 033ab3e8 to 034ab3f3 has its CatchHandler @ 033ab278 */
    index = 0;
    while( true ) {
      if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033ab3f4 to 034ab3fb has its CatchHandler @ 033ab3fc */
        thunk_FUN_01ba7564();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ab3e0 with catch @ 033ab3fc
                       catch(type#2 @ 00000000) { ... } // from try @ 033ab3f4 with catch @ 033ab3fc
                        */
      pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
      if ((pSVar4 == (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) ||
         (pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar4,index,
                              Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__),
         pIVar2 == (Il2CppObject *)0x0)) goto LAB_033ab4c8;
      if (*(int *)((long)&pIVar2[1].klass + 4) == NAIJBCMHBFK) {
        if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
        if ((pSVar4 == (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) ||
           (pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,index,
                                Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__),
           pIVar2 == (Il2CppObject *)0x0)) goto LAB_033ab4c8;
        if (*(int *)&pIVar2[1].monitor == OPHMGAKOJLP) {
          if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
          if (pSVar4 != (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
            pNVar3 = (NLIDHEAMLMC_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,index,
                                Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__);
            return pNVar3;
          }
          goto LAB_033ab4c8;
        }
      }
      if (iVar1 + -1 == index) break;
      index = index + 1;
    }
  }
  return (NLIDHEAMLMC_o *)0x0;
}


// ===== public static void IIHMILNAGAB(KKCLOOGGILP PCLEALHGACC, ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP)  [RVA 0x32AB4CC]
// BGFNOPDHEOM$$IIHMILNAGAB @ RVA 0x32AB4CC

void BGFNOPDHEOM__IIHMILNAGAB
               (int32_t PCLEALHGACC,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  NLIDHEAMLMC_o *pNVar3;
  System_Collections_Generic_List_NLIDHEAMLMC__o *__this;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  NLIDHEAMLMC_array *pNVar4;
  
  method_00 = (MethodInfo *)(ulong)(uint)NAIJBCMHBFK;
  if ((DAT_04567437 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_Add__);
    FUN_01bab630(&NLIDHEAMLMC_TypeInfo);
    DAT_04567437 = 1;
    method_00 = extraout_x1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pNVar3 = BGFNOPDHEOM__PFOBJKIPLCK(PCLEALHGACC,method_00);
  if (pNVar3 != (NLIDHEAMLMC_o *)0x0) {
    (pNVar3->fields).ELHIGHABJBJ = NAIJBCMHBFK;
    (pNVar3->fields).OFFPEKODFPE = OPHMGAKOJLP;
    return;
  }
  pNVar3 = (NLIDHEAMLMC_o *)thunk_FUN_01bda818(NLIDHEAMLMC_TypeInfo);
  NLIDHEAMLMC___ctor(pNVar3,PCLEALHGACC,NAIJBCMHBFK,OPHMGAKOJLP,(MethodInfo *)0x0);
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = Method_System_Collections_Generic_List<NLIDHEAMLMC>_Add__;
  __this = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
  if (__this != (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
    pNVar4 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pNVar4 != (NLIDHEAMLMC_array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pNVar4->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pNVar4->m_Items[(int)uVar1] = pNVar3;
        thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,pNVar3);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pNVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static KKCLOOGGILP DGJLLOKIIMA(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP)  [RVA 0x32AB250]
// BGFNOPDHEOM$$DGJLLOKIIMA @ RVA 0x32AB250

int32_t BGFNOPDHEOM__DGJLLOKIIMA(int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,MethodInfo *method)

{
  NLIDHEAMLMC_o *pNVar1;
  NLIDHEAMLMC_Fields *pNVar2;
  
  if ((DAT_04567438 & 1) == 0) {
                    /* try { // try from 033ab278 to 034ab32b has its CatchHandler @ 033ab278
                       catch() { ... } // from try @ 033ab278 with catch @ 033ab278
                       catch() { ... } // from try @ 033ab334 with catch @ 033ab278
                       catch() { ... } // from try @ 033ab384 with catch @ 033ab278
                       catch() { ... } // from try @ 033ab3a8 with catch @ 033ab278
                       catch() { ... } // from try @ 033ab3e8 with catch @ 033ab278 */
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    DAT_04567438 = 1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = BGFNOPDHEOM__BGDJFKHKHDK(NAIJBCMHBFK,OPHMGAKOJLP,method);
  if (pNVar1 == (NLIDHEAMLMC_o *)0x0) {
    if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar2 = (NLIDHEAMLMC_Fields *)&BGFNOPDHEOM_TypeInfo->static_fields->JPDBJAEDIEM;
  }
  else {
    pNVar2 = &pNVar1->fields;
  }
  return pNVar2->NJCMGCGNCLJ;
}


// ===== public static void BFEKPFEDCDG(KKCLOOGGILP CJNHFNHJHPE)  [RVA 0x32AB618]
// BGFNOPDHEOM$$BFEKPFEDCDG @ RVA 0x32AB618

void BGFNOPDHEOM__BFEKPFEDCDG(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567439 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    DAT_04567439 = 1;
    method = extraout_x1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BGFNOPDHEOM_TypeInfo,method);
  }
  BGFNOPDHEOM_TypeInfo->static_fields->JPDBJAEDIEM = CJNHFNHJHPE;
  return;
}


// ===== public static void IIHMILNAGAB(NLIDHEAMLMC OCMMDIHLKMH)  [RVA 0x32AB674]
// BGFNOPDHEOM$$IIHMILNAGAB @ RVA 0x32AB674

void BGFNOPDHEOM__IIHMILNAGAB(NLIDHEAMLMC_o *OCMMDIHLKMH,MethodInfo *method)

{
  int32_t PCLEALHGACC;
  int32_t NAIJBCMHBFK;
  int32_t OPHMGAKOJLP;
  MethodInfo *in_x3;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = OCMMDIHLKMH;
  if ((DAT_0456743a & 1) == 0) {
    auVar1 = FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    DAT_0456743a = 1;
  }
  if (OCMMDIHLKMH != (NLIDHEAMLMC_o *)0x0) {
    PCLEALHGACC = (OCMMDIHLKMH->fields).NJCMGCGNCLJ;
    NAIJBCMHBFK = (OCMMDIHLKMH->fields).ELHIGHABJBJ;
    OPHMGAKOJLP = (OCMMDIHLKMH->fields).OFFPEKODFPE;
    if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    BGFNOPDHEOM__IIHMILNAGAB(PCLEALHGACC,NAIJBCMHBFK,OPHMGAKOJLP,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
}

