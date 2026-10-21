// KELJDKIIHMM$$KHGEMIEPBJB @ RVA 0x3004464

Nekki_SF2_GUI_TableViewCell_o *
KELJDKIIHMM__KHGEMIEPBJB(KELJDKIIHMM_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Nekki_SF2_GUI_TableViewCell_o *local_28;
  
  if ((DAT_04565b35 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_TryGetValue__);
    DAT_04565b35 = 1;
  }
  local_28 = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              (__this->fields)._IKBFEDMFOMJ_k__BackingField;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__TryGetValue
              (__this_00,DPJIDNBJIBG,(Il2CppObject **)&local_28,
               Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_TryGetValue__);
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

