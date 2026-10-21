// FCJBEKHDLAF$$MPAJHIDJKEM @ RVA 0x33EDBBC

System_Collections_IEnumerator_o *
FCJBEKHDLAF__MPAJHIDJKEM
          (FCJBEKHDLAF_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *BCKBBGCOMJD,MethodInfo *method)

{
  FCJBEKHDLAF_OPHOGFBEJAM_o *__this_00;
  FCJBEKHDLAF_o **ppFVar1;
  OLKKAIFGGAK_EAOIGPODIAI_o **ppOVar2;
  
  if ((DAT_04567f14 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_OPHOGFBEJAM_TypeInfo);
    DAT_04567f14 = 1;
  }
  __this_00 = (FCJBEKHDLAF_OPHOGFBEJAM_o *)thunk_FUN_01bda818(FCJBEKHDLAF_OPHOGFBEJAM_TypeInfo);
  FCJBEKHDLAF_OPHOGFBEJAM___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (FCJBEKHDLAF_OPHOGFBEJAM_o *)0x0) {
    ppFVar1 = &(__this_00->fields).__4__this;
    *ppFVar1 = __this;
    thunk_FUN_01c20e04(ppFVar1,__this);
    ppOVar2 = &(__this_00->fields).model;
    *ppOVar2 = BCKBBGCOMJD;
    thunk_FUN_01c20e04(ppOVar2,BCKBBGCOMJD);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

