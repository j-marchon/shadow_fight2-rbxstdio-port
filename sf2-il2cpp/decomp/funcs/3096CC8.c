// Sf2.Timers$$NKLGCNHLBAF @ RVA 0x3096CC8

System_IDisposable_o *
Sf2_Timers__NKLGCNHLBAF(Sf2_Timers_o *__this,HPPHKOJNEPB_o *KILAOGMHCEO,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if ((DAT_045660e1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HDNONCJLIHI>_Insert__);
    DAT_045660e1 = 1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).DIKHJEINHID;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__Insert
              (__this_00,0,(Il2CppObject *)KILAOGMHCEO,
               Method_System_Collections_Generic_List<HDNONCJLIHI>_Insert__);
    return (System_IDisposable_o *)KILAOGMHCEO;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

