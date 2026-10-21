// TypeDefIndex 95
// Namespace: 
// public class KELJDKIIHMM
// Fields:
//   public Range CIMDIANAHIM; // 0x10
//   private Dictionary<int, TableViewCell> <IKBFEDMFOMJ>k__BackingField; // 0x18

// ===== public TableViewCell KHGEMIEPBJB(int DPJIDNBJIBG)  [RVA 0x3004464]
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


// ===== public void JOBEMHLDEGD(int DPJIDNBJIBG)  [RVA 0x30044D4]
// KELJDKIIHMM$$JOBEMHLDEGD @ RVA 0x30044D4

void KELJDKIIHMM__JOBEMHLDEGD(KELJDKIIHMM_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  
  if ((DAT_04565b36 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_Remove__);
    DAT_04565b36 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              (__this->fields)._IKBFEDMFOMJ_k__BackingField;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__Remove
              (__this_00,DPJIDNBJIBG,
               Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x300452C]
// KELJDKIIHMM$$.ctor @ RVA 0x300452C

void KELJDKIIHMM___ctor(KELJDKIIHMM_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_int__TableViewCell__o **ppSVar1;
  UnityEngine_SocialPlatforms_Range_Fields local_28;
  
  if ((DAT_04565b37 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_TableViewCell>_TypeInfo);
    DAT_04565b37 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  local_28.from = 0;
  local_28.count = 0;
  UnityEngine_SocialPlatforms_Range___ctor
            ((UnityEngine_SocialPlatforms_Range_o)&local_28,0,0,(MethodInfo *)0x0);
  (__this->fields).CIMDIANAHIM.fields = local_28;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_TableViewCell>_TypeInfo)
  ;
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<int,_TableViewCell>__ctor__);
  ppSVar1 = &(__this->fields)._IKBFEDMFOMJ_k__BackingField;
  *ppSVar1 = (System_Collections_Generic_Dictionary_int__TableViewCell__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  return;
}


// ===== public int LDJLMEFOMLG()  [RVA 0x30045D8]
// KELJDKIIHMM$$LDJLMEFOMLG @ RVA 0x30045D8

int32_t KELJDKIIHMM__LDJLMEFOMLG(KELJDKIIHMM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565b38 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_get_Count__);
    DAT_04565b38 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              (__this->fields)._IKBFEDMFOMJ_k__BackingField;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary<int,_object>__get_Count
                      (__this_00,
                       Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_get_Count__)
    ;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void PAELKLACODA(Dictionary<int, TableViewCell> CJNHFNHJHPE)  [RVA 0x3004628]
// KELJDKIIHMM$$PAELKLACODA @ RVA 0x3004628

void KELJDKIIHMM__PAELKLACODA
               (KELJDKIIHMM_o *__this,
               System_Collections_Generic_Dictionary_int__TableViewCell__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._IKBFEDMFOMJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void MCMKOONDIEO(int DPJIDNBJIBG, TableViewCell HBHBCBJANIC)  [RVA 0x3004630]
// KELJDKIIHMM$$MCMKOONDIEO @ RVA 0x3004630

void KELJDKIIHMM__MCMKOONDIEO
               (KELJDKIIHMM_o *__this,int32_t DPJIDNBJIBG,Nekki_SF2_GUI_TableViewCell_o *HBHBCBJANIC
               ,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  
  if ((DAT_04565b39 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_set_Item__);
    DAT_04565b39 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              (__this->fields)._IKBFEDMFOMJ_k__BackingField;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__set_Item
              (__this_00,DPJIDNBJIBG,(Il2CppObject *)HBHBCBJANIC,
               Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Dictionary<int, TableViewCell> OLBMHFBLAPA()  [RVA 0x3004698]
// KELJDKIIHMM$$OLBMHFBLAPA @ RVA 0x3004698

System_Collections_Generic_Dictionary_int__TableViewCell__o *
KELJDKIIHMM__OLBMHFBLAPA(KELJDKIIHMM_o *__this,MethodInfo *method)

{
  return (__this->fields)._IKBFEDMFOMJ_k__BackingField;
}

