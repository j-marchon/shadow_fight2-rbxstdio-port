// TypeDefIndex 582
// Namespace: 
// [CompilerGenerated]
// private sealed class FDJKKAFIEFB.KDBBHOMLGBN
// Fields:
//   public string languageName; // 0x10
//   public FDJKKAFIEFB <>4__this; // 0x18

// ===== internal bool CMOLCDDDFOE(DBNEEHGBCJD lang)  [RVA 0x35B5E20]
// FDJKKAFIEFB.KDBBHOMLGBN$$CMOLCDDDFOE @ RVA 0x35B5E20

bool FDJKKAFIEFB_KDBBHOMLGBN__CMOLCDDDFOE
               (FDJKKAFIEFB_KDBBHOMLGBN_o *__this,DBNEEHGBCJD_o *lang,MethodInfo *method)

{
  bool bVar1;
  FDJKKAFIEFB_o *pFVar2;
  
  if ((lang != (DBNEEHGBCJD_o *)0x0) &&
     (pFVar2 = (__this->fields).__4__this, pFVar2 != (FDJKKAFIEFB_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((lang->fields)._COIPKAKHDFP_k__BackingField,
                       (pFVar2->fields)._PDKPBHDALBH_k__BackingField,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35B3550]
// FDJKKAFIEFB.KDBBHOMLGBN$$.ctor @ RVA 0x35B3550

void FDJKKAFIEFB_KDBBHOMLGBN___ctor(FDJKKAFIEFB_KDBBHOMLGBN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal DBNEEHGBCJD AOKIOPIEODA()  [RVA 0x35B3594]
// FDJKKAFIEFB.KDBBHOMLGBN$$AOKIOPIEODA @ RVA 0x35B3594

DBNEEHGBCJD_o *
FDJKKAFIEFB_KDBBHOMLGBN__AOKIOPIEODA(FDJKKAFIEFB_KDBBHOMLGBN_o *__this,MethodInfo *method)

{
  System_Predicate_T__o *match;
  DBNEEHGBCJD_o *pDVar1;
  MethodInfo *extraout_x1;
  FDJKKAFIEFB_o *pFVar2;
  System_Collections_Generic_List_DBNEEHGBCJD__o *__this_00;
  
  if ((DAT_04568ebe & 1) == 0) {
    FUN_01bab630(&Method_FDJKKAFIEFB_KDBBHOMLGBN_CMOLCDDDFOE__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
    FUN_01bab630(&System_Predicate<DBNEEHGBCJD>_TypeInfo);
    DAT_04568ebe = 1;
    method = extraout_x1;
  }
  pFVar2 = (__this->fields).__4__this;
  if (pFVar2 != (FDJKKAFIEFB_o *)0x0) {
    __this_00 = (pFVar2->fields).DIKCNPKCGJP;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<DBNEEHGBCJD>_TypeInfo,method);
    System_Predicate<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) {
      pDVar1 = (DBNEEHGBCJD_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_00,match,
                          Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
      return pDVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal bool GDMDHKHHADB(DBNEEHGBCJD lang)  [RVA 0x35B5E48]
// FDJKKAFIEFB.KDBBHOMLGBN$$GDMDHKHHADB @ RVA 0x35B5E48

bool FDJKKAFIEFB_KDBBHOMLGBN__GDMDHKHHADB
               (FDJKKAFIEFB_KDBBHOMLGBN_o *__this,DBNEEHGBCJD_o *lang,MethodInfo *method)

{
  bool bVar1;
  
  if (lang != (DBNEEHGBCJD_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((lang->fields)._COIPKAKHDFP_k__BackingField,(__this->fields).languageName,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

