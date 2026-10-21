// FPIPKMIODLH$$ODPHNHAJHCF @ RVA 0x3116FDC

void FPIPKMIODLH__ODPHNHAJHCF(FPIPKMIODLH_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  FCJBEKHDLAF_o *pFVar3;
  MMDDDDFHOLG_o *pMVar4;
  
                    /* try { // try from 03216fe0 to 03316fe7 has its CatchHandler @ 032170a0 */
                    /* try { // try from 03216ff4 to 03316fff has its CatchHandler @ 0321709c */
  if ((DAT_045665bc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Remove__);
    FUN_01bab630(&StringLiteral_3048);
    DAT_045665bc = 1;
  }
                    /* try { // try from 03217034 to 03317053 has its CatchHandler @ 03217090 */
  if ((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
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
      if (((pFVar3 != (FCJBEKHDLAF_o *)0x0) &&
          (pMVar4 = (pFVar3->fields).POEGCOJFMDB, pMVar4 != (MMDDDDFHOLG_o *)0x0)) &&
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
                  (__this_00,StringLiteral_3048,
                   (Il2CppObject *)(__this->fields)._COIPKAKHDFP_k__BackingField,
                   Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
        pFVar3 = (__this->fields)._CKOGELANOLD_k__BackingField;
        if ((pFVar3 != (FCJBEKHDLAF_o *)0x0) &&
           (pMVar4 = (pFVar3->fields).POEGCOJFMDB, pMVar4 != (MMDDDDFHOLG_o *)0x0)) {
                    /* try { // try from 032170b8 to 033170bb has its CatchHandler @ 032170dc */
                    /* try { // try from 032170bc to 033170e3 has its CatchHandler @ 03216d70 */
          MMDDDDFHOLG__CFEOMJALMBB
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

