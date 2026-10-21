// TypeDefIndex 2599
// Namespace: 
// public class NKDMOOEFPHJ
// Fields:
//   private OLKKAIFGGAK PDKOKGEECDC; // 0x10
//   private Dictionary<ECENNHNBAME, NKDMOOEFPHJ.ACFDNGGGDIJ> NCICFCFDKGL; // 0x18
//   private Dictionary<ECENNHNBAME, NKDMOOEFPHJ.ACFDNGGGDIJ> JIEJMAMHHMD; // 0x20
//   private List<ECENNHNBAME> MJFICLOHJEL; // 0x28
//   private static NKDMOOEFPHJ.ACFDNGGGDIJ BJHKKNDJGGE; // 0x0
//   private int HMCEFKIBEJG; // 0x30
//   private int JIHNEHGPFHK; // 0x34

// ===== private float GHNNJFPNHHA()  [RVA 0x33A955C]
// NKDMOOEFPHJ$$GHNNJFPNHHA @ RVA 0x33A955C

float NKDMOOEFPHJ__GHNNJFPNHHA(NKDMOOEFPHJ_o *__this,MethodInfo *method)

{
  OLKKAIFGGAK_o *pOVar1;
  NGKBNOEJLPH_o *pNVar2;
  CAAJMGKIPIE_o *pCVar3;
  CAAJMGKIPIE_FBOGOHEIDCK_o *pCVar4;
  float fVar5;
  
  pOVar1 = (__this->fields).PDKOKGEECDC;
  if (pOVar1 != (OLKKAIFGGAK_o *)0x0) {
    pNVar2 = (pOVar1->fields).ADGFKAPOIFN;
    fVar5 = 0.0;
    if ((pNVar2 != (NGKBNOEJLPH_o *)0x0) &&
       (pCVar3 = (pNVar2->fields)._MPABEMCEHCL_k__BackingField, pCVar3 != (CAAJMGKIPIE_o *)0x0)) {
      pCVar4 = (pCVar3->fields).OEKGJBJANED;
      if (pCVar4 == (CAAJMGKIPIE_FBOGOHEIDCK_o *)0x0) goto LAB_034a9590;
      fVar5 = (pCVar4->fields).APFANODMCKP;
    }
    return fVar5;
  }
LAB_034a9590:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ADMAIMDJBLI(bool KPGNMOKKJNI, ECENNHNBAME NLEBDPHNIDI)  [RVA 0x33A9594]
// NKDMOOEFPHJ$$ADMAIMDJBLI @ RVA 0x33A9594

void NKDMOOEFPHJ__ADMAIMDJBLI
               (NKDMOOEFPHJ_o *__this,bool KPGNMOKKJNI,ECENNHNBAME_o *NLEBDPHNIDI,MethodInfo *method
               )

{
  NKDMOOEFPHJ_ACFDNGGGDIJ_o *pNVar1;
  float fVar2;
  float fVar3;
  
  pNVar1 = NKDMOOEFPHJ__LINKPADNPGE(__this,KPGNMOKKJNI,NLEBDPHNIDI,method);
  if (pNVar1 != (NKDMOOEFPHJ_ACFDNGGGDIJ_o *)0x0) {
    fVar2 = (pNVar1->fields).KMENOPCKFLM;
    fVar3 = (pNVar1->fields).AGMCOJBKCAA;
    (pNVar1->fields).KMENOPCKFLM = 0.0;
    (pNVar1->fields).AGMCOJBKCAA = 0.0;
    (pNVar1->fields).AIKGGIJGOOP = (pNVar1->fields).AIKGGIJGOOP + fVar2;
    (pNVar1->fields).ILGLFEKDGND = (pNVar1->fields).ILGLFEKDGND + fVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public OLKKAIFGGAK BBGBNLKMBMG()  [RVA 0x33A9710]
// NKDMOOEFPHJ$$BBGBNLKMBMG @ RVA 0x33A9710

OLKKAIFGGAK_o * NKDMOOEFPHJ__BBGBNLKMBMG(NKDMOOEFPHJ_o *__this,MethodInfo *method)

{
  return (__this->fields).PDKOKGEECDC;
}


// ===== public void BHEJHLJJNLD(bool JECKCMKCNCH, bool CPKEPNCILEN)  [RVA 0x33A9718]
// NKDMOOEFPHJ$$BHEJHLJJNLD @ RVA 0x33A9718

void NKDMOOEFPHJ__BHEJHLJJNLD
               (NKDMOOEFPHJ_o *__this,bool JECKCMKCNCH,bool CPKEPNCILEN,MethodInfo *method)

{
  if (!JECKCMKCNCH) {
    (__this->fields).HMCEFKIBEJG = (__this->fields).HMCEFKIBEJG + 1;
  }
  if (CPKEPNCILEN) {
    (__this->fields).JIHNEHGPFHK = (__this->fields).JIHNEHGPFHK + 1;
    return;
  }
  return;
}


// ===== private NKDMOOEFPHJ.ACFDNGGGDIJ LINKPADNPGE(bool KPGNMOKKJNI, ECENNHNBAME NLEBDPHNIDI)  [RVA 0x33A95D0]
// NKDMOOEFPHJ$$LINKPADNPGE @ RVA 0x33A95D0

NKDMOOEFPHJ_ACFDNGGGDIJ_o *
NKDMOOEFPHJ__LINKPADNPGE
          (NKDMOOEFPHJ_o *__this,bool KPGNMOKKJNI,ECENNHNBAME_o *NLEBDPHNIDI,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  NKDMOOEFPHJ_ACFDNGGGDIJ_o *pNVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04567d03 & 1) == 0) {
    FUN_01bab630(&NKDMOOEFPHJ_ACFDNGGGDIJ_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_get_Item__
                );
    DAT_04567d03 = 1;
  }
  lVar1 = 0x18;
  if (!KPGNMOKKJNI) {
    lVar1 = 0x20;
  }
  __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
               ((long)&__this->klass + lVar1);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_00,(Il2CppObject *)NLEBDPHNIDI,
                       Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_ContainsKey__
                      );
    if (bVar2) {
      pNVar3 = (NKDMOOEFPHJ_ACFDNGGGDIJ_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_00,(Il2CppObject *)NLEBDPHNIDI,
                          Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_get_Item__
                         );
      return pNVar3;
    }
    pNVar3 = (NKDMOOEFPHJ_ACFDNGGGDIJ_o *)thunk_FUN_01bda818(NKDMOOEFPHJ_ACFDNGGGDIJ_TypeInfo);
    System_Object___ctor((Il2CppObject *)pNVar3,(MethodInfo *)0x0);
    (pNVar3->fields).BPJEIHLJFHO = NLEBDPHNIDI;
    thunk_FUN_01c20e04(&pNVar3->fields,NLEBDPHNIDI);
    (pNVar3->fields).KMENOPCKFLM = 0.0;
    (pNVar3->fields).AIKGGIJGOOP = 0.0;
    (pNVar3->fields).JCIDLNABHMN = 0.0;
    (pNVar3->fields).AGMCOJBKCAA = 0.0;
    (pNVar3->fields).ILGLFEKDGND = 0.0;
    (pNVar3->fields).FAMAEGGIJCF = 0;
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,(Il2CppObject *)NLEBDPHNIDI,(Il2CppObject *)pNVar3,
               Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Add__
              );
    return pNVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KBBHCAAFDCO(bool KPGNMOKKJNI, ECENNHNBAME NLEBDPHNIDI, float LINBBAKAFCP)  [RVA 0x33A9780]
// NKDMOOEFPHJ$$KBBHCAAFDCO @ RVA 0x33A9780

void NKDMOOEFPHJ__KBBHCAAFDCO
               (NKDMOOEFPHJ_o *__this,bool KPGNMOKKJNI,ECENNHNBAME_o *NLEBDPHNIDI,float LINBBAKAFCP,
               MethodInfo *method)

{
  int32_t DDNILPCHOCN;
  OLKKAIFGGAK_o *__this_00;
  NKDMOOEFPHJ_ACFDNGGGDIJ_o *__this_01;
  MethodInfo *method_00;
  float AIHACFDHGMA;
  
  __this_00 = (__this->fields).PDKOKGEECDC;
  if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
    DDNILPCHOCN = OLKKAIFGGAK__NNPKHNBIKBC(__this_00,(MethodInfo *)0x0);
    AIHACFDHGMA = NKDMOOEFPHJ__GHNNJFPNHHA(__this,method_00);
    __this_01 = NKDMOOEFPHJ__LINKPADNPGE(__this,KPGNMOKKJNI,NLEBDPHNIDI,method);
    if (__this_01 != (NKDMOOEFPHJ_ACFDNGGGDIJ_o *)0x0) {
      NKDMOOEFPHJ_ACFDNGGGDIJ__IFKEDFECIBH
                (__this_01,DDNILPCHOCN,AIHACFDHGMA,(MethodInfo *)NLEBDPHNIDI);
      (__this_01->fields).KMENOPCKFLM = (__this_01->fields).KMENOPCKFLM + LINBBAKAFCP;
      (__this_01->fields).AGMCOJBKCAA = (__this_01->fields).AGMCOJBKCAA + 1.0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DGLJCGNHLIG()  [RVA 0x33A9858]
// NKDMOOEFPHJ$$DGLJCGNHLIG @ RVA 0x33A9858

void NKDMOOEFPHJ__DGLJCGNHLIG(NKDMOOEFPHJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  
  if ((DAT_04567d04 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Clear__
                );
    DAT_04567d04 = 1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).NCICFCFDKGL;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (pSVar1,
               Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Clear__
              );
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).JIEJMAMHHMD
    ;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar1,
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Clear__
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MHKENGKHDKD()  [RVA 0x33A98B8]
// NKDMOOEFPHJ$$MHKENGKHDKD @ RVA 0x33A98B8

void NKDMOOEFPHJ__MHKENGKHDKD(NKDMOOEFPHJ_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  float fVar5;
  void *pvVar6;
  float fVar7;
  float fVar8;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_88;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04567d05 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_get_Values__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_GetEnumerator__
                );
    DAT_04567d05 = 1;
  }
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._currentValue = (Il2CppObject *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).NCICFCFDKGL;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                       (pSVar3,
                        Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_get_Values__
                       );
    if (pSVar4 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
                (&local_88,pSVar4,
                 Method_System_Collections_Generic_Dictionary_ValueCollection<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_GetEnumerator__
                );
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._dictionary = local_88.fields._dictionary;
      local_70.fields._currentValue = local_88.fields._currentValue;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_MoveNext__
                          );
        pIVar1 = local_70.fields._currentValue;
        if (!bVar2) break;
        if (local_70.fields._currentValue == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        fVar7 = *(float *)&local_70.fields._currentValue[2].klass;
        fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_00);
        fVar8 = *(float *)((long)&pIVar1[1].monitor + 4);
        *(float *)&pIVar1[2].klass = fVar7 * fVar5;
        fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_01);
        fVar7 = *(float *)&pIVar1[1].monitor;
        *(float *)((long)&pIVar1[1].monitor + 4) = fVar8 * fVar5;
        fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_02);
        fVar8 = *(float *)&pIVar1[2].monitor;
        *(float *)&pIVar1[1].monitor = fVar7 * fVar5;
        fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_03);
        *(float *)&pIVar1[2].monitor = fVar8 * fVar5;
        fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_04);
        pvVar6 = pIVar1[1].monitor;
        *(float *)&pIVar1[2].monitor = fVar5 * *(float *)&pIVar1[2].monitor;
        pIVar1[2].klass =
             (Il2CppClass *)
             CONCAT44((float)((ulong)pIVar1[2].klass >> 0x20) * fVar5,
                      SUB84(pIVar1[2].klass,0) * fVar5);
        pIVar1[1].monitor =
             (void *)CONCAT44((float)((ulong)pvVar6 >> 0x20) * fVar5,SUB84(pvVar6,0) * fVar5);
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Dispose__
                );
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).JIEJMAMHHMD;
      if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pSVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                             (pSVar3,
                              Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_get_Values__
                             ),
         pSVar4 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
        System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
                  (&local_88,pSVar4,
                   Method_System_Collections_Generic_Dictionary_ValueCollection<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_GetEnumerator__
                  );
        local_70.fields._index = local_88.fields._index;
        local_70.fields._version = local_88.fields._version;
        local_70.fields._dictionary = local_88.fields._dictionary;
        local_70.fields._currentValue = local_88.fields._currentValue;
        while( true ) {
          bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                            (&local_70,
                             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_MoveNext__
                            );
          pIVar1 = local_70.fields._currentValue;
          if (!bVar2) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Dispose__
                      );
            return;
          }
          if (local_70.fields._currentValue == (Il2CppObject *)0x0) break;
          fVar7 = *(float *)&local_70.fields._currentValue[2].klass;
          fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_05);
          fVar8 = *(float *)((long)&pIVar1[1].monitor + 4);
          *(float *)&pIVar1[2].klass = fVar7 * fVar5;
          fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_06);
          fVar7 = *(float *)&pIVar1[1].monitor;
          *(float *)((long)&pIVar1[1].monitor + 4) = fVar8 * fVar5;
          fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_07);
          fVar8 = *(float *)&pIVar1[2].monitor;
          *(float *)&pIVar1[1].monitor = fVar7 * fVar5;
          fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_08);
          *(float *)&pIVar1[2].monitor = fVar8 * fVar5;
          fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_09);
          pvVar6 = pIVar1[1].monitor;
          *(float *)&pIVar1[2].monitor = fVar5 * *(float *)&pIVar1[2].monitor;
          pIVar1[2].klass =
               (Il2CppClass *)
               CONCAT44((float)((ulong)pIVar1[2].klass >> 0x20) * fVar5,
                        SUB84(pIVar1[2].klass,0) * fVar5);
          pIVar1[1].monitor =
               (void *)CONCAT44((float)((ulong)pvVar6 >> 0x20) * fVar5,SUB84(pvVar6,0) * fVar5);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FKCBGOIECHC(bool KPGNMOKKJNI, ECENNHNBAME NLEBDPHNIDI)  [RVA 0x33A9C38]
// NKDMOOEFPHJ$$FKCBGOIECHC @ RVA 0x33A9C38

void NKDMOOEFPHJ__FKCBGOIECHC
               (NKDMOOEFPHJ_o *__this,bool KPGNMOKKJNI,ECENNHNBAME_o *NLEBDPHNIDI,MethodInfo *method
               )

{
  int32_t DDNILPCHOCN;
  OLKKAIFGGAK_o *__this_00;
  NKDMOOEFPHJ_ACFDNGGGDIJ_o *__this_01;
  MethodInfo *method_00;
  float AIHACFDHGMA;
  
  __this_00 = (__this->fields).PDKOKGEECDC;
  if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
    DDNILPCHOCN = OLKKAIFGGAK__NNPKHNBIKBC(__this_00,(MethodInfo *)0x0);
    AIHACFDHGMA = NKDMOOEFPHJ__GHNNJFPNHHA(__this,method_00);
    __this_01 = NKDMOOEFPHJ__LINKPADNPGE(__this,KPGNMOKKJNI,NLEBDPHNIDI,method);
    if (__this_01 != (NKDMOOEFPHJ_ACFDNGGGDIJ_o *)0x0) {
      NKDMOOEFPHJ_ACFDNGGGDIJ__IFKEDFECIBH
                (__this_01,DDNILPCHOCN,AIHACFDHGMA,(MethodInfo *)NLEBDPHNIDI);
      (__this_01->fields).JCIDLNABHMN = (__this_01->fields).JCIDLNABHMN + 1.0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x33A9CE4]
// NKDMOOEFPHJ$$.ctor @ RVA 0x33A9CE4

void NKDMOOEFPHJ___ctor(NKDMOOEFPHJ_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_ECENNHNBAME__NKDMOOEFPHJ_ACFDNGGGDIJ__o **ppSVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar3;
  
  if ((DAT_04567d06 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_TypeInfo
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    DAT_04567d06 = 1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,
             Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>__ctor__
            );
  ppSVar2 = &(__this->fields).NCICFCFDKGL;
  *ppSVar2 = (System_Collections_Generic_Dictionary_ECENNHNBAME__NKDMOOEFPHJ_ACFDNGGGDIJ__o *)pSVar1
  ;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,
             Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>__ctor__
            );
  ppSVar2 = &(__this->fields).JIEJMAMHHMD;
  *ppSVar2 = (System_Collections_Generic_Dictionary_ECENNHNBAME__NKDMOOEFPHJ_ACFDNGGGDIJ__o *)pSVar1
  ;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar3 = &(__this->fields).MJFICLOHJEL;
  *ppSVar3 = __this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).PDKOKGEECDC = BCKBBGCOMJD;
  thunk_FUN_01c20e04(&__this->fields,BCKBBGCOMJD);
  return;
}


// ===== public bool GMHAHMILKBP()  [RVA 0x33A9DF8]
// NKDMOOEFPHJ$$GMHAHMILKBP @ RVA 0x33A9DF8

bool NKDMOOEFPHJ__GMHAHMILKBP(NKDMOOEFPHJ_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  JMDPBFOCHHP_o *pJVar3;
  MethodInfo *extraout_x1;
  JMDPBFOCHHP_DLMLPMIANHI_o *pJVar4;
  float fVar5;
  
  if ((DAT_04567d07 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567d07 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((pJVar3 != (JMDPBFOCHHP_o *)0x0) &&
     (pJVar4 = (pJVar3->fields)._OLABMBDNACG_k__BackingField,
     pJVar4 != (JMDPBFOCHHP_DLMLPMIANHI_o *)0x0)) {
    iVar2 = (pJVar4->fields).OCPHBEEPAEG;
    pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar3 != (JMDPBFOCHHP_o *)0x0) &&
       (pJVar4 = (pJVar3->fields)._OLABMBDNACG_k__BackingField,
       pJVar4 != (JMDPBFOCHHP_DLMLPMIANHI_o *)0x0)) {
      fVar5 = (pJVar4->fields).ODEJMJFJDAI * (float)(__this->fields).HMCEFKIBEJG;
      iVar1 = -0x80000000;
      if (fVar5 != INFINITY) {
        iVar1 = (int)fVar5;
      }
      return (__this->fields).JIHNEHGPFHK + 1 <= iVar1 + iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private float CECMKEMHHAA()  [RVA 0x33A9BE4]
// NKDMOOEFPHJ$$CECMKEMHHAA @ RVA 0x33A9BE4

float NKDMOOEFPHJ__CECMKEMHHAA(NKDMOOEFPHJ_o *__this,MethodInfo *method)

{
  OLKKAIFGGAK_o *pOVar1;
  NGKBNOEJLPH_o *pNVar2;
  CAAJMGKIPIE_o *pCVar3;
  CAAJMGKIPIE_FBOGOHEIDCK_o *pCVar4;
  float fVar5;
  
  pOVar1 = (__this->fields).PDKOKGEECDC;
  if (pOVar1 != (OLKKAIFGGAK_o *)0x0) {
    pNVar2 = (pOVar1->fields).ADGFKAPOIFN;
    fVar5 = 0.0;
    if ((pNVar2 != (NGKBNOEJLPH_o *)0x0) &&
       (pCVar3 = (pNVar2->fields)._MPABEMCEHCL_k__BackingField, pCVar3 != (CAAJMGKIPIE_o *)0x0)) {
      pCVar4 = (pCVar3->fields).OEKGJBJANED;
      if (pCVar4 == (CAAJMGKIPIE_FBOGOHEIDCK_o *)0x0) goto LAB_034a9c18;
      fVar5 = (pCVar4->fields).BAJKKDHKEPH;
    }
    return fVar5;
  }
LAB_034a9c18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HHGPIDALLPC(bool KPGNMOKKJNI, string BACEBCCDLFE, ref float DFIBGGDJPLM, ref float LINBBAKAFCP, ref float AHEDHNBDHFD)  [RVA 0x33A9EB4]
// NKDMOOEFPHJ$$HHGPIDALLPC @ RVA 0x33A9EB4

void NKDMOOEFPHJ__HHGPIDALLPC
               (NKDMOOEFPHJ_o *__this,bool KPGNMOKKJNI,System_String_o *BACEBCCDLFE,
               float *DFIBGGDJPLM,float *LINBBAKAFCP,float *AHEDHNBDHFD,MethodInfo *method)

{
  int32_t length;
  ECENNHNBAME_o *NLEBDPHNIDI;
  int index;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar1;
  float local_54;
  float local_48 [2];
  
  if ((DAT_04567d08 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
    DAT_04567d08 = 1;
  }
  *DFIBGGDJPLM = 0.0;
  *LINBBAKAFCP = 0.0;
  pSVar1 = (__this->fields).MJFICLOHJEL;
  if (pSVar1 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).MJFICLOHJEL;
    }
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LDHBHPILNMA__CADFKPKODCI(BACEBCCDLFE,pSVar1,(MethodInfo *)0x0);
    local_48[0] = 0.0;
    local_48[1] = 0.0;
    local_54 = 0.0;
    pSVar1 = (__this->fields).MJFICLOHJEL;
    if (pSVar1 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
      index = 0;
      do {
        if ((pSVar1->fields)._size <= index) {
          return;
        }
        NLEBDPHNIDI = (ECENNHNBAME_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                 Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
        NKDMOOEFPHJ__HHGPIDALLPC
                  (__this,KPGNMOKKJNI,NLEBDPHNIDI,local_48 + 1,local_48,&local_54,method);
        index = index + 1;
        *DFIBGGDJPLM = *DFIBGGDJPLM + local_48[1];
        *LINBBAKAFCP = *LINBBAKAFCP + local_48[0];
        *AHEDHNBDHFD = *AHEDHNBDHFD + local_54;
        pSVar1 = (__this->fields).MJFICLOHJEL;
      } while (pSVar1 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HHGPIDALLPC(bool KPGNMOKKJNI, ECENNHNBAME NLEBDPHNIDI, ref float DFIBGGDJPLM, ref float LINBBAKAFCP, ref float AHEDHNBDHFD)  [RVA 0x33AA038]
// NKDMOOEFPHJ$$HHGPIDALLPC @ RVA 0x33AA038

void NKDMOOEFPHJ__HHGPIDALLPC
               (NKDMOOEFPHJ_o *__this,bool KPGNMOKKJNI,ECENNHNBAME_o *NLEBDPHNIDI,float *DFIBGGDJPLM
               ,float *LINBBAKAFCP,float *AHEDHNBDHFD,MethodInfo *method)

{
  int32_t DDNILPCHOCN;
  NKDMOOEFPHJ_ACFDNGGGDIJ_o *__this_00;
  MethodInfo *method_00;
  OLKKAIFGGAK_o *__this_01;
  float AIHACFDHGMA;
  
  __this_00 = NKDMOOEFPHJ__LINKPADNPGE(__this,KPGNMOKKJNI,NLEBDPHNIDI,(MethodInfo *)DFIBGGDJPLM);
  __this_01 = (__this->fields).PDKOKGEECDC;
  if (__this_01 != (OLKKAIFGGAK_o *)0x0) {
    DDNILPCHOCN = OLKKAIFGGAK__NNPKHNBIKBC(__this_01,(MethodInfo *)0x0);
    AIHACFDHGMA = NKDMOOEFPHJ__GHNNJFPNHHA(__this,method_00);
    if (__this_00 != (NKDMOOEFPHJ_ACFDNGGGDIJ_o *)0x0) {
      NKDMOOEFPHJ_ACFDNGGGDIJ__IFKEDFECIBH
                (__this_00,DDNILPCHOCN,AIHACFDHGMA,(MethodInfo *)NLEBDPHNIDI);
      *DFIBGGDJPLM = (__this_00->fields).JCIDLNABHMN;
      NKDMOOEFPHJ_ACFDNGGGDIJ__IFKEDFECIBH
                (__this_00,DDNILPCHOCN,AIHACFDHGMA,(MethodInfo *)NLEBDPHNIDI);
      *LINBBAKAFCP = (__this_00->fields).AIKGGIJGOOP;
      NKDMOOEFPHJ_ACFDNGGGDIJ__IFKEDFECIBH
                (__this_00,DDNILPCHOCN,AIHACFDHGMA,(MethodInfo *)NLEBDPHNIDI);
      *AHEDHNBDHFD = (__this_00->fields).ILGLFEKDGND;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

