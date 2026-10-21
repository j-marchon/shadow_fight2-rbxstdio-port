// HOOAAGABMBL$$BPEBMFNKCAF @ RVA 0x30E87C4

void HOOAAGABMBL__BPEBMFNKCAF(HOOAAGABMBL_o *__this,HEFOANCOHDC_o *BJJFDMHOBNB,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  
                    /* try { // try from 031e87d0 to 032e87d3 has its CatchHandler @ 031e87fc */
                    /* try { // try from 031e87d4 to 032e880b has its CatchHandler @ 031e848c */
  if ((DAT_04566401 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
    DAT_04566401 = 1;
  }
  __this_00 = (__this->fields)._BPHPMGBCNOO_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* catch() { ... } // from try @ 031e87d0 with catch @ 031e87fc */
                    /* try { // try from 031e880c to 032e8813 has its CatchHandler @ 031e8828 */
                    /* try { // try from 031e8814 to 032e881f has its CatchHandler @ 031e848c */
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)BJJFDMHOBNB,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

