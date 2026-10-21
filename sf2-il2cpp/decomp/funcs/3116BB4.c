// FPIPKMIODLH$$CGJIIEOFLGG @ RVA 0x3116BB4

void FPIPKMIODLH__CGJIIEOFLGG(FPIPKMIODLH_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  FPIPKMIODLH_FLANEOMPKLB_o *__this_00;
  FPIPKMIODLH_o **ppFVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_String_o *message;
  MethodInfo *method_00;
  OLKKAIFGGAK_o *IGMNBGIAGGK;
  int32_t ACCIHBHMFPN;
  FCJBEKHDLAF_o *pFVar6;
  MMDDDDFHOLG_o *pMVar7;
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
    FUN_01bab630(&StringLiteral_3048);
                    /* try { // try from 03216c34 to 03316c43 has its CatchHandler @ 03216cc0 */
    FUN_01bab630(&StringLiteral_342);
    FUN_01bab630(&StringLiteral_9328);
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
    if ((pFVar8->model != (OLKKAIFGGAK_o *)0x0) &&
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
        if ((pFVar8->model != (OLKKAIFGGAK_o *)0x0) &&
           (pSVar4 = (System_Collections_Generic_HashSet_object__o *)
                     (pFVar8->model->fields).DBLOJJBPLGE,
           pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
                    /* try { // try from 03216ce4 to 03316ce7 has its CatchHandler @ 03216d08 */
                    /* try { // try from 03216ce8 to 03316d0f has its CatchHandler @ 032169ec */
          System_Collections_Generic_HashSet<object>__Remove
                    (pSVar4,(Il2CppObject *)(__this->fields)._COIPKAKHDFP_k__BackingField,
                     Method_System_Collections_Generic_HashSet<string>_Remove__);
          pFVar6 = (__this->fields)._CKOGELANOLD_k__BackingField;
          if ((pFVar6 != (FCJBEKHDLAF_o *)0x0) &&
             ((pMVar7 = (pFVar6->fields).POEGCOJFMDB, pMVar7 != (MMDDDDFHOLG_o *)0x0 &&
              (pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (pMVar7->fields).KECADJKAJNG,
              pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)))) {
                    /* catch() { ... } // from try @ 03216ce4 with catch @ 03216d08 */
                    /* try { // try from 03216d10 to 03316d17 has its CatchHandler @ 03216d2c */
                    /* try { // try from 03216d18 to 03316d23 has its CatchHandler @ 032169ec */
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (pSVar5,StringLiteral_3048,
                       (Il2CppObject *)(__this->fields)._COIPKAKHDFP_k__BackingField,
                       Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
                    /* try { // try from 03216d24 to 03316d2b has its CatchHandler @ 03216d2c */
            pFVar6 = (__this->fields)._CKOGELANOLD_k__BackingField;
                    /* catch() { ... } // from try @ 03216d10 with catch @ 03216d2c
                       catch() { ... } // from try @ 03216d24 with catch @ 03216d2c */
            if ((pFVar6 != (FCJBEKHDLAF_o *)0x0) &&
               (pMVar7 = (pFVar6->fields).POEGCOJFMDB, pMVar7 != (MMDDDDFHOLG_o *)0x0)) {
              IGMNBGIAGGK = pFVar8->model;
              ACCIHBHMFPN = 0x10;
LAB_03216e18:
              MMDDDDFHOLG__CFEOMJALMBB
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
        if ((pFVar8->model != (OLKKAIFGGAK_o *)0x0) &&
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
                                (StringLiteral_9328,(__this->fields)._COIPKAKHDFP_k__BackingField,
                                 StringLiteral_342,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
          }
          pFVar6 = (__this->fields)._CKOGELANOLD_k__BackingField;
          if (((pFVar6 != (FCJBEKHDLAF_o *)0x0) &&
              (pMVar7 = (pFVar6->fields).POEGCOJFMDB, pMVar7 != (MMDDDDFHOLG_o *)0x0)) &&
             (pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (pMVar7->fields).KECADJKAJNG,
             pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (pSVar5,StringLiteral_3048,
                       (Il2CppObject *)(__this->fields)._COIPKAKHDFP_k__BackingField,
                       Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
            pFVar6 = (__this->fields)._CKOGELANOLD_k__BackingField;
            if ((pFVar6 != (FCJBEKHDLAF_o *)0x0) &&
               (pMVar7 = (pFVar6->fields).POEGCOJFMDB, pMVar7 != (MMDDDDFHOLG_o *)0x0)) {
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

