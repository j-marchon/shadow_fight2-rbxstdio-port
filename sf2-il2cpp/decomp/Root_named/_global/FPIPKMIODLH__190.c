// TypeDefIndex 190
// Namespace: 
// public abstract class FPIPKMIODLH
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x10
//   private float <BEEGDJFPEHO>k__BackingField; // 0x18
//   private float <FLIJNAGNIMB>k__BackingField; // 0x1C
//   private float <OHGCPINODPO>k__BackingField; // 0x20
//   private bool <ILHGDFFOGHP>k__BackingField; // 0x24
//   private Fight <CKOGELANOLD>k__BackingField; // 0x28

// ===== public Fight BGPCHIAFOOL()  [RVA 0x3116A20]
// FPIPKMIODLH$$BGPCHIAFOOL @ RVA 0x3116A20

Fight_o * FPIPKMIODLH__BGPCHIAFOOL(FPIPKMIODLH_o *__this,MethodInfo *method)

{
  return (__this->fields)._CKOGELANOLD_k__BackingField;
}


// ===== protected void GIKIEKJJMNO(float CJNHFNHJHPE)  [RVA 0x3116A28]
// FPIPKMIODLH$$GIKIEKJJMNO @ RVA 0x3116A28

void FPIPKMIODLH__GIKIEKJJMNO(FPIPKMIODLH_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OHGCPINODPO_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public float LCMPOJCBNCM()  [RVA 0x3116A30]
// FPIPKMIODLH$$LCMPOJCBNCM @ RVA 0x3116A30

float FPIPKMIODLH__LCMPOJCBNCM(FPIPKMIODLH_o *__this,MethodInfo *method)

{
  return (__this->fields)._OHGCPINODPO_k__BackingField;
}


// ===== protected void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x3116A38]
// FPIPKMIODLH$$HCOCAAIGNNL @ RVA 0x3116A38

void FPIPKMIODLH__HCOCAAIGNNL(FPIPKMIODLH_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public bool FPBFCPPDGNI()  [RVA 0x3116A40]
// FPIPKMIODLH$$FPBFCPPDGNI @ RVA 0x3116A40

bool FPIPKMIODLH__FPBFCPPDGNI(FPIPKMIODLH_o *__this,MethodInfo *method)

{
  return (__this->fields)._ILHGDFFOGHP_k__BackingField;
}


// ===== public float DKEMDAOLHDK()  [RVA 0x3116A48]
// FPIPKMIODLH$$DKEMDAOLHDK @ RVA 0x3116A48

float FPIPKMIODLH__DKEMDAOLHDK(FPIPKMIODLH_o *__this,MethodInfo *method)

{
  return (__this->fields)._FLIJNAGNIMB_k__BackingField;
}


// ===== public float LJMGGJPILHG()  [RVA 0x3116A50]
// FPIPKMIODLH$$LJMGGJPILHG @ RVA 0x3116A50

float FPIPKMIODLH__LJMGGJPILHG(FPIPKMIODLH_o *__this,MethodInfo *method)

{
  return (__this->fields)._BEEGDJFPEHO_k__BackingField;
}


// ===== protected void IBMLJFPFOHM(float CJNHFNHJHPE)  [RVA 0x3116A58]
// FPIPKMIODLH$$IBMLJFPFOHM @ RVA 0x3116A58

void FPIPKMIODLH__IBMLJFPFOHM(FPIPKMIODLH_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BEEGDJFPEHO_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3116A60]
// FPIPKMIODLH$$KCHJCGEMCGE @ RVA 0x3116A60

System_String_o * FPIPKMIODLH__KCHJCGEMCGE(FPIPKMIODLH_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== protected void .ctor(string KGLJICLJHEL, float NMFKJBOAOLK)  [RVA 0x3116A68]
// FPIPKMIODLH$$.ctor @ RVA 0x3116A68

void FPIPKMIODLH___ctor(FPIPKMIODLH_o *__this,System_String_o *KGLJICLJHEL,float NMFKJBOAOLK,
                       MethodInfo *method)

{
  Fight_o **ppFVar1;
  
  if ((DAT_045665ba & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&StringLiteral_4171/*"Cant create area outside of a fight"*/);
    DAT_045665ba = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._COIPKAKHDFP_k__BackingField = KGLJICLJHEL;
  thunk_FUN_01c20e04(&__this->fields,KGLJICLJHEL);
  (__this->fields)._BEEGDJFPEHO_k__BackingField = NMFKJBOAOLK;
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
                    /* try { // try from 03216b14 to 03316b1b has its CatchHandler @ 03216ccc */
    DAT_04565b7f = '\x01';
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 03216b28 to 03316b33 has its CatchHandler @ 03216cc4 */
  }
  ppFVar1 = &(__this->fields)._CKOGELANOLD_k__BackingField;
  *ppFVar1 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
  thunk_FUN_01c20e04(ppFVar1);
  if (*ppFVar1 != (Fight_o *)0x0) {
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03216b74 to 03316b83 has its CatchHandler @ 03216cc0 */
                    /* try { // try from 03216b88 to 03316b93 has its CatchHandler @ 03216cbc */
  UnityEngine_Debug__LogError(StringLiteral_4171/*"Cant create area outside of a fight"*/,(MethodInfo *)0x0);
  return;
}


// ===== private void HKELKJHHEHH(Fight CJNHFNHJHPE)  [RVA 0x3116B98]
// FPIPKMIODLH$$HKELKJHHEHH @ RVA 0x3116B98

void FPIPKMIODLH__HKELKJHHEHH(FPIPKMIODLH_o *__this,Fight_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CKOGELANOLD_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void NAHNMBMHGAG(bool CJNHFNHJHPE)  [RVA 0x3116BA0]
// FPIPKMIODLH$$NAHNMBMHGAG @ RVA 0x3116BA0

void FPIPKMIODLH__NAHNMBMHGAG(FPIPKMIODLH_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._ILHGDFFOGHP_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== protected void NGOFNADHLBL(float CJNHFNHJHPE)  [RVA 0x3116BAC]
// FPIPKMIODLH$$NGOFNADHLBL @ RVA 0x3116BAC

void FPIPKMIODLH__NGOFNADHLBL(FPIPKMIODLH_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FLIJNAGNIMB_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public virtual void CGJIIEOFLGG(Model BCKBBGCOMJD)  [RVA 0x3116BB4]
// FPIPKMIODLH$$CGJIIEOFLGG @ RVA 0x3116BB4

void FPIPKMIODLH__CGJIIEOFLGG(FPIPKMIODLH_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  FPIPKMIODLH_FLANEOMPKLB_o *__this_00;
  FPIPKMIODLH_o **ppFVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_String_o *message;
  MethodInfo *method_00;
  Model_o *IGMNBGIAGGK;
  int32_t ACCIHBHMFPN;
  Fight_o *pFVar6;
  MovesInFightVariables_o *pMVar7;
  FPIPKMIODLH_FLANEOMPKLB_Fields *pFVar8;
  
                    /* try { // try from 03216bd4 to 03316be3 has its CatchHandler @ 03216cc0 */
  if ((DAT_045665bb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03216be8 to 03316bf3 has its CatchHandler @ 03216cb8 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    FUN_01bab630(&FPIPKMIODLH_FLANEOMPKLB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Remove__);
    FUN_01bab630(&StringLiteral_3048/*"Area"*/);
                    /* try { // try from 03216c34 to 03316c43 has its CatchHandler @ 03216cc0 */
    FUN_01bab630(&StringLiteral_342/*" already exists"*/);
    FUN_01bab630(&StringLiteral_9328/*"Name "*/);
                    /* try { // try from 03216c48 to 03316c53 has its CatchHandler @ 03216cb4 */
    DAT_045665bb = 1;
  }
  __this_00 = (FPIPKMIODLH_FLANEOMPKLB_o *)thunk_FUN_01bda818(FPIPKMIODLH_FLANEOMPKLB_TypeInfo);
                    /* try { // try from 03216c58 to 03316c63 has its CatchHandler @ 03216cb0 */
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (FPIPKMIODLH_FLANEOMPKLB_o *)0x0) {
    pFVar8 = &__this_00->fields;
                    /* try { // try from 03216c6c to 03316c73 has its CatchHandler @ 03216cac */
    pFVar8->model = BCKBBGCOMJD;
                    /* try { // try from 03216c74 to 03316ca3 has its CatchHandler @ 032169ec */
    thunk_FUN_01c20e04(pFVar8,BCKBBGCOMJD);
    ppFVar3 = &(__this_00->fields).__4__this;
    *ppFVar3 = __this;
    thunk_FUN_01c20e04(ppFVar3,__this);
    if ((pFVar8->model != (Model_o *)0x0) &&
       (pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pFVar8->model->fields).DBLOJJBPLGE
       , pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
                    /* try { // try from 03216ca4 to 03316ca7 has its CatchHandler @ 03216cc8 */
                    /* try { // try from 03216ca8 to 03316ce3 has its CatchHandler @ 032169ec */
                    /* catch() { ... } // from try @ 03216c6c with catch @ 03216cac */
      bVar2 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar4,(Il2CppObject *)(__this->fields)._COIPKAKHDFP_k__BackingField,
                         Method_System_Collections_Generic_HashSet<string>_Contains__);
                    /* catch() { ... } // from try @ 03216c58 with catch @ 03216cb0 */
      bVar1 = (__this->fields)._ILHGDFFOGHP_k__BackingField;
                    /* catch() { ... } // from try @ 03216c48 with catch @ 03216cb4 */
      if (bVar2) {
                    /* catch() { ... } // from try @ 03216be8 with catch @ 03216cb8 */
                    /* catch() { ... } // from try @ 03216b88 with catch @ 03216cbc */
                    /* catch() { ... } // from try @ 03216b74 with catch @ 03216cc0
                       catch() { ... } // from try @ 03216bd4 with catch @ 03216cc0
                       catch() { ... } // from try @ 03216c34 with catch @ 03216cc0 */
                    /* catch() { ... } // from try @ 03216b28 with catch @ 03216cc4 */
        if ((bVar1 != false) &&
           (bVar2 = FPIPKMIODLH_FLANEOMPKLB__EOHAEPHCPKF(__this_00,method_00), bVar2)) {
          return;
        }
                    /* catch() { ... } // from try @ 03216ca4 with catch @ 03216cc8 */
                    /* catch() { ... } // from try @ 03216b14 with catch @ 03216ccc */
        if ((pFVar8->model != (Model_o *)0x0) &&
           (pSVar4 = (System_Collections_Generic_HashSet_object__o *)
                     (pFVar8->model->fields).DBLOJJBPLGE,
           pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
                    /* try { // try from 03216ce4 to 03316ce7 has its CatchHandler @ 03216d08 */
                    /* try { // try from 03216ce8 to 03316d0f has its CatchHandler @ 032169ec */
          System_Collections_Generic_HashSet<object>__Remove
                    (pSVar4,(Il2CppObject *)(__this->fields)._COIPKAKHDFP_k__BackingField,
                     Method_System_Collections_Generic_HashSet<string>_Remove__);
          pFVar6 = (__this->fields)._CKOGELANOLD_k__BackingField;
          if ((pFVar6 != (Fight_o *)0x0) &&
             ((pMVar7 = (pFVar6->fields).POEGCOJFMDB, pMVar7 != (MovesInFightVariables_o *)0x0 &&
              (pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (pMVar7->fields).KECADJKAJNG,
              pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)))) {
                    /* catch() { ... } // from try @ 03216ce4 with catch @ 03216d08 */
                    /* try { // try from 03216d10 to 03316d17 has its CatchHandler @ 03216d2c */
                    /* try { // try from 03216d18 to 03316d23 has its CatchHandler @ 032169ec */
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (pSVar5,StringLiteral_3048/*"Area"*/,
                       (Il2CppObject *)(__this->fields)._COIPKAKHDFP_k__BackingField,
                       Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
                    /* try { // try from 03216d24 to 03316d2b has its CatchHandler @ 03216d2c */
            pFVar6 = (__this->fields)._CKOGELANOLD_k__BackingField;
                    /* catch() { ... } // from try @ 03216d10 with catch @ 03216d2c
                       catch() { ... } // from try @ 03216d24 with catch @ 03216d2c */
            if ((pFVar6 != (Fight_o *)0x0) &&
               (pMVar7 = (pFVar6->fields).POEGCOJFMDB, pMVar7 != (MovesInFightVariables_o *)0x0)) {
              IGMNBGIAGGK = pFVar8->model;
              ACCIHBHMFPN = 0x10;
LAB_03216e18:
              MovesInFightVariables__CFEOMJALMBB
                        (pMVar7,IGMNBGIAGGK,ACCIHBHMFPN,true,(NJPBBPOABKP_o *)0x0,(MethodInfo *)0x0)
              ;
              return;
            }
          }
        }
      }
      else {
        if (bVar1 == false) {
          return;
        }
        bVar2 = FPIPKMIODLH_FLANEOMPKLB__EOHAEPHCPKF(__this_00,method_00);
        if (!bVar2) {
          return;
        }
        if ((pFVar8->model != (Model_o *)0x0) &&
           (pSVar4 = (System_Collections_Generic_HashSet_object__o *)
                     (pFVar8->model->fields).DBLOJJBPLGE,
           pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
                    /* try { // try from 03216d70 to 03316fdf has its CatchHandler @ 03216d70
                       catch() { ... } // from try @ 03216d70 with catch @ 03216d70
                       catch() { ... } // from try @ 03217054 with catch @ 03216d70
                       catch() { ... } // from try @ 0321708c with catch @ 03216d70
                       catch() { ... } // from try @ 032170bc with catch @ 03216d70
                       catch() { ... } // from try @ 032170ec with catch @ 03216d70 */
          bVar2 = System_Collections_Generic_HashSet<object>__Add
                            (pSVar4,(Il2CppObject *)(__this->fields)._COIPKAKHDFP_k__BackingField,
                             Method_System_Collections_Generic_HashSet<string>_Add__);
          if (!bVar2) {
            message = System_String__Concat
                                (StringLiteral_9328/*"Name "*/,(__this->fields)._COIPKAKHDFP_k__BackingField,
                                 StringLiteral_342/*" already exists"*/,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
          }
          pFVar6 = (__this->fields)._CKOGELANOLD_k__BackingField;
          if (((pFVar6 != (Fight_o *)0x0) &&
              (pMVar7 = (pFVar6->fields).POEGCOJFMDB, pMVar7 != (MovesInFightVariables_o *)0x0)) &&
             (pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (pMVar7->fields).KECADJKAJNG,
             pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (pSVar5,StringLiteral_3048/*"Area"*/,
                       (Il2CppObject *)(__this->fields)._COIPKAKHDFP_k__BackingField,
                       Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
            pFVar6 = (__this->fields)._CKOGELANOLD_k__BackingField;
            if ((pFVar6 != (Fight_o *)0x0) &&
               (pMVar7 = (pFVar6->fields).POEGCOJFMDB, pMVar7 != (MovesInFightVariables_o *)0x0)) {
              IGMNBGIAGGK = pFVar8->model;
              ACCIHBHMFPN = 0xf;
              goto LAB_03216e18;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ODPHNHAJHCF(Model BCKBBGCOMJD)  [RVA 0x3116FDC]
// FPIPKMIODLH$$ODPHNHAJHCF @ RVA 0x3116FDC

void FPIPKMIODLH__ODPHNHAJHCF(FPIPKMIODLH_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Fight_o *pFVar3;
  MovesInFightVariables_o *pMVar4;
  
                    /* try { // try from 03216fe0 to 03316fe7 has its CatchHandler @ 032170a0 */
                    /* try { // try from 03216ff4 to 03316fff has its CatchHandler @ 0321709c */
  if ((DAT_045665bc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Remove__);
    FUN_01bab630(&StringLiteral_3048/*"Area"*/);
    DAT_045665bc = 1;
  }
                    /* try { // try from 03217034 to 03317053 has its CatchHandler @ 03217090 */
  if ((BCKBBGCOMJD != (Model_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_HashSet_object__o *)(BCKBBGCOMJD->fields).DBLOJJBPLGE,
     pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (pSVar2,(Il2CppObject *)(__this->fields)._COIPKAKHDFP_k__BackingField,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    if (!bVar1) {
                    /* catch() { ... } // from try @ 032170b8 with catch @ 032170dc */
      return;
    }
                    /* try { // try from 03217054 to 0331707f has its CatchHandler @ 03216d70 */
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)(BCKBBGCOMJD->fields).DBLOJJBPLGE;
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Remove
                (pSVar2,(Il2CppObject *)(__this->fields)._COIPKAKHDFP_k__BackingField,
                 Method_System_Collections_Generic_HashSet<string>_Remove__);
      pFVar3 = (__this->fields)._CKOGELANOLD_k__BackingField;
                    /* try { // try from 03217080 to 03317083 has its CatchHandler @ 03217098 */
                    /* try { // try from 03217084 to 0331708b has its CatchHandler @ 03217094 */
      if (((pFVar3 != (Fight_o *)0x0) &&
          (pMVar4 = (pFVar3->fields).POEGCOJFMDB, pMVar4 != (MovesInFightVariables_o *)0x0)) &&
         (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (pMVar4->fields).KECADJKAJNG,
         __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    /* try { // try from 0321708c to 033170b7 has its CatchHandler @ 03216d70 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03217034 with catch @ 03217090
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03217084 with catch @ 03217094
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03217080 with catch @ 03217098
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03216ff4 with catch @ 0321709c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03216fe0 with catch @ 032170a0
                        */
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (__this_00,StringLiteral_3048/*"Area"*/,
                   (Il2CppObject *)(__this->fields)._COIPKAKHDFP_k__BackingField,
                   Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
        pFVar3 = (__this->fields)._CKOGELANOLD_k__BackingField;
        if ((pFVar3 != (Fight_o *)0x0) &&
           (pMVar4 = (pFVar3->fields).POEGCOJFMDB, pMVar4 != (MovesInFightVariables_o *)0x0)) {
                    /* try { // try from 032170b8 to 033170bb has its CatchHandler @ 032170dc */
                    /* try { // try from 032170bc to 033170e3 has its CatchHandler @ 03216d70 */
          MovesInFightVariables__CFEOMJALMBB
                    (pMVar4,BCKBBGCOMJD,0x10,true,(NJPBBPOABKP_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032170e4 to 033170eb has its CatchHandler @ 03217100 */
  FUN_01bab8c8();
}

