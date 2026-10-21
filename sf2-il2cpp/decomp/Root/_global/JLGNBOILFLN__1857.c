// TypeDefIndex 1857
// Namespace: 
// public class JLGNBOILFLN : OMLLDCIMLBB<object>
// Fields:
//   protected JLGNBOILFLN.CFOMPHCOCOI OIKLOAGFFGO; // 0x18
//   protected int GHPHFGBIPCI; // 0x1C
//   protected HEFOANCOHDC LENFGEAJDMN; // 0x20
//   public bool HAEBIACJLHP; // 0x28
//   protected JLGNBOILFLN.LIHPLIFKLDM JDNKKGPNHPB; // 0x2C
//   protected string BJMHBMDFFPA; // 0x30

// ===== public int EOEAKGGDBFH()  [RVA 0x3248960]
// JLGNBOILFLN$$EOEAKGGDBFH @ RVA 0x3248960

int32_t JLGNBOILFLN__EOEAKGGDBFH(JLGNBOILFLN_o *__this,MethodInfo *method)

{
  return (__this->fields).GHPHFGBIPCI;
}


// ===== public string KIEKFCEPGCO()  [RVA 0x3248968]
// JLGNBOILFLN$$KIEKFCEPGCO @ RVA 0x3248968

System_String_o * JLGNBOILFLN__KIEKFCEPGCO(JLGNBOILFLN_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  HEFOANCOHDC_o *pHVar2;
  
  if ((DAT_045670d3 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045670d3 = 1;
  }
  pHVar2 = (__this->fields).LENFGEAJDMN;
  ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
  if (pHVar2 != (HEFOANCOHDC_o *)0x0) {
    ppSVar1 = &(pHVar2->fields).JJONOCGMEMK;
  }
  return *ppSVar1;
}


// ===== public HEFOANCOHDC LNNIHAKPANA()  [RVA 0x32489BC]
// JLGNBOILFLN$$LNNIHAKPANA @ RVA 0x32489BC

HEFOANCOHDC_o * JLGNBOILFLN__LNNIHAKPANA(JLGNBOILFLN_o *__this,MethodInfo *method)

{
  return (__this->fields).LENFGEAJDMN;
}


// ===== public bool PGGIAJNCCNG(int PIDMGHLCFAJ)  [RVA 0x32489C4]
// JLGNBOILFLN$$PGGIAJNCCNG @ RVA 0x32489C4

bool JLGNBOILFLN__PGGIAJNCCNG(JLGNBOILFLN_o *__this,int32_t PIDMGHLCFAJ,MethodInfo *method)

{
  return PIDMGHLCFAJ < (__this->fields).GHPHFGBIPCI;
}


// ===== public void HLPHKOBKPML(string CJNHFNHJHPE)  [RVA 0x32489D4]
// JLGNBOILFLN$$HLPHKOBKPML @ RVA 0x32489D4

void JLGNBOILFLN__HLPHKOBKPML(JLGNBOILFLN_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  Il2CppObject *PLPFOJADDML;
  undefined4 local_34;
  
  if ((DAT_045670d4 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_045670d4 = 1;
  }
  ppSVar1 = &(__this->fields).BJMHBMDFFPA;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  local_34 = 0;
  PLPFOJADDML = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  OMLLDCIMLBB<object>__CallEvent
            ((OMLLDCIMLBB_object__o *)__this,3,PLPFOJADDML,Method_OMLLDCIMLBB<object>_CallEvent__);
  return;
}


// ===== public int BCLMIPIBLLB()  [RVA 0x3248A70]
// JLGNBOILFLN$$BCLMIPIBLLB @ RVA 0x3248A70

int32_t JLGNBOILFLN__BCLMIPIBLLB(JLGNBOILFLN_o *__this,MethodInfo *method)

{
  HEFOANCOHDC_o *pHVar1;
  
  pHVar1 = (__this->fields).LENFGEAJDMN;
  if (pHVar1 != (HEFOANCOHDC_o *)0x0) {
    return (pHVar1->fields).AEIJFFBOBCP;
  }
  return 0;
}


// ===== public string CJPIFPJMENP()  [RVA 0x3248A88]
// JLGNBOILFLN$$CJPIFPJMENP @ RVA 0x3248A88

System_String_o * JLGNBOILFLN__CJPIFPJMENP(JLGNBOILFLN_o *__this,MethodInfo *method)

{
  return (__this->fields).BJMHBMDFFPA;
}


// ===== public JLGNBOILFLN.CFOMPHCOCOI LMHGLKLHLDN()  [RVA 0x3248A90]
// JLGNBOILFLN$$LMHGLKLHLDN @ RVA 0x3248A90

int32_t JLGNBOILFLN__LMHGLKLHLDN(JLGNBOILFLN_o *__this,MethodInfo *method)

{
  return (__this->fields).OIKLOAGFFGO;
}


// ===== public ECENNHNBAME MJKINAHFKIG()  [RVA 0x3248A98]
// JLGNBOILFLN$$MJKINAHFKIG @ RVA 0x3248A98

ECENNHNBAME_o * JLGNBOILFLN__MJKINAHFKIG(JLGNBOILFLN_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  HEFOANCOHDC_o *pHVar4;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_00;
  int index;
  
  if ((DAT_045670d5 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
    DAT_045670d5 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).LENFGEAJDMN != (HEFOANCOHDC_o *)0x0) {
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_04565f31 == '\0') {
      FUN_01bab630(&LDHBHPILNMA_TypeInfo);
      DAT_04565f31 = '\x01';
      method = extraout_x1_01;
    }
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo,method);
    }
    __this_00 = LDHBHPILNMA_TypeInfo->static_fields->GLNEIGKMPDC;
    if (__this_00 == (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
LAB_03348bc4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
        if ((pIVar3 == (Il2CppObject *)0x0) ||
           (pHVar4 = (__this->fields).LENFGEAJDMN, pHVar4 == (HEFOANCOHDC_o *)0x0))
        goto LAB_03348bc4;
        bVar2 = System_String__op_Equality
                          (pIVar3[1].monitor,(pHVar4->fields).JJONOCGMEMK,(MethodInfo *)0x0);
        if (bVar2) {
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
          if (pIVar3 != (Il2CppObject *)0x0) {
            return pIVar3[3].monitor;
          }
          goto LAB_03348bc4;
        }
        index = index + 1;
      } while (iVar1 != index);
    }
  }
  return (ECENNHNBAME_o *)0x0;
}


// ===== public void .ctor(HEFOANCOHDC EIKFGOCCOIE, int JLAFGLDIFOC, JLGNBOILFLN.CFOMPHCOCOI HJEBKCDDBAB = 0, JLGNBOILFLN.LIHPLIFKLDM ACCIHBHMFPN = 0)  [RVA 0x3248BC8]
// JLGNBOILFLN$$.ctor @ RVA 0x3248BC8

void JLGNBOILFLN___ctor(JLGNBOILFLN_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,int32_t JLAFGLDIFOC,
                       int32_t HJEBKCDDBAB,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o **ppSVar2;
  HEFOANCOHDC_o **ppHVar3;
  
  if ((DAT_045670d6 & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045670d6 = 1;
  }
  OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
  (__this->fields).OIKLOAGFFGO = HJEBKCDDBAB;
  (__this->fields).GHPHFGBIPCI = JLAFGLDIFOC;
  ppHVar3 = &(__this->fields).LENFGEAJDMN;
  *ppHVar3 = EIKFGOCCOIE;
  thunk_FUN_01c20e04(ppHVar3,EIKFGOCCOIE);
  (__this->fields).HAEBIACJLHP = false;
  (__this->fields).JDNKKGPNHPB = ACCIHBHMFPN;
  ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
  if (*ppHVar3 != (HEFOANCOHDC_o *)0x0) {
    ppSVar1 = &((*ppHVar3)->fields).BPCADJLKKGA;
  }
  ppSVar2 = &(__this->fields).BJMHBMDFFPA;
  *ppSVar2 = *ppSVar1;
  thunk_FUN_01c20e04(ppSVar2);
  return;
}


// ===== public JLGNBOILFLN.LIHPLIFKLDM NHGGBEACKBD()  [RVA 0x3248C8C]
// JLGNBOILFLN$$NHGGBEACKBD @ RVA 0x3248C8C

int32_t JLGNBOILFLN__NHGGBEACKBD(JLGNBOILFLN_o *__this,MethodInfo *method)

{
  return (__this->fields).JDNKKGPNHPB;
}


// ===== private void JCNAJEMHJCN()  [RVA 0x3248C94]
// JLGNBOILFLN$$JCNAJEMHJCN @ RVA 0x3248C94

void JLGNBOILFLN__JCNAJEMHJCN(JLGNBOILFLN_o *__this,MethodInfo *method)

{
  if ((DAT_045670d7 & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_045670d7 = 1;
  }
  OMLLDCIMLBB<object>__CallEvent
            ((OMLLDCIMLBB_object__o *)__this,1,(Il2CppObject *)0x0,
             Method_OMLLDCIMLBB<object>_CallEvent__);
  return;
}


// ===== public string GKMAFGODLLG()  [RVA 0x3248CE4]
// JLGNBOILFLN$$GKMAFGODLLG @ RVA 0x3248CE4

System_String_o * JLGNBOILFLN__GKMAFGODLLG(JLGNBOILFLN_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  HEFOANCOHDC_o *pHVar2;
  
  if ((DAT_045670d8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045670d8 = 1;
  }
  pHVar2 = (__this->fields).LENFGEAJDMN;
  ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
  if (pHVar2 != (HEFOANCOHDC_o *)0x0) {
    ppSVar1 = &(pHVar2->fields).JIJLBFGKNJK;
  }
  return *ppSVar1;
}


// ===== public string MBIIPOJONAM()  [RVA 0x3248D38]
// JLGNBOILFLN$$MBIIPOJONAM @ RVA 0x3248D38

System_String_o * JLGNBOILFLN__MBIIPOJONAM(JLGNBOILFLN_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  HEFOANCOHDC_o *pHVar2;
  
  if ((DAT_045670d9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045670d9 = 1;
  }
  pHVar2 = (__this->fields).LENFGEAJDMN;
  ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
  if (pHVar2 != (HEFOANCOHDC_o *)0x0) {
    ppSVar1 = &(pHVar2->fields).KPDPJONADPJ;
  }
  return *ppSVar1;
}


// ===== public void LAAHJCGKKNK(HEFOANCOHDC CJNHFNHJHPE)  [RVA 0x3248D8C]
// JLGNBOILFLN$$LAAHJCGKKNK @ RVA 0x3248D8C

void JLGNBOILFLN__LAAHJCGKKNK(JLGNBOILFLN_o *__this,HEFOANCOHDC_o *CJNHFNHJHPE,MethodInfo *method)

{
  HEFOANCOHDC_o **ppHVar1;
  Il2CppObject *PLPFOJADDML;
  undefined4 local_34;
  
  if ((DAT_045670da & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_045670da = 1;
  }
  ppHVar1 = &(__this->fields).LENFGEAJDMN;
  *ppHVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppHVar1,CJNHFNHJHPE);
  local_34 = 0;
  PLPFOJADDML = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  OMLLDCIMLBB<object>__CallEvent
            ((OMLLDCIMLBB_object__o *)__this,2,PLPFOJADDML,Method_OMLLDCIMLBB<object>_CallEvent__);
  return;
}


// ===== public void GPGHFJOGLJJ(JLGNBOILFLN.CFOMPHCOCOI CJNHFNHJHPE)  [RVA 0x3248E28]
// JLGNBOILFLN$$GPGHFJOGLJJ @ RVA 0x3248E28

void JLGNBOILFLN__GPGHFJOGLJJ(JLGNBOILFLN_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppObject *PLPFOJADDML;
  int32_t local_34;
  
  if ((DAT_045670db & 1) == 0) {
    FUN_01bab630(&JLGNBOILFLN_CFOMPHCOCOI_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_045670db = 1;
  }
  (__this->fields).OIKLOAGFFGO = CJNHFNHJHPE;
  local_34 = CJNHFNHJHPE;
  PLPFOJADDML = (Il2CppObject *)thunk_FUN_01bda448(JLGNBOILFLN_CFOMPHCOCOI_TypeInfo,&local_34);
  OMLLDCIMLBB<object>__CallEvent
            ((OMLLDCIMLBB_object__o *)__this,0,PLPFOJADDML,Method_OMLLDCIMLBB<object>_CallEvent__);
  return;
}

