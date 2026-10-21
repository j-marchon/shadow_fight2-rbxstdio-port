// NOMBKAHPOHM$$.ctor @ RVA 0x32DA4D0

void NOMBKAHPOHM___ctor(NOMBKAHPOHM_o *__this,MethodInfo *method)

{
  FPPKHNNABAD_o *__this_00;
  FPPKHNNABAD_o **ppFVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045675ad & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045675ad = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033da520 to 034da5bb has its CatchHandler @ 033d9edc */
  __this_00 = (FPPKHNNABAD_o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppFVar1 = &(__this->fields).NDBPOFMECGL;
  *ppFVar1 = __this_00;
  thunk_FUN_01c20e04(ppFVar1,__this_00);
  *(undefined4 *)&(__this->fields).OBDMHHJBLKL = 0xffffffff;
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,method_00);
  return;
}

