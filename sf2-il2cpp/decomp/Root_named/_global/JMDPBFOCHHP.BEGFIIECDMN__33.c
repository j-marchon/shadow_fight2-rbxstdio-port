// TypeDefIndex 33
// Namespace: 
// public class RaidConfig.BEGFIIECDMN
// Fields:
//   public Dictionary<string, int> GJCCGCCOJCO; // 0x10
//   public ADGIHFGIFHO HCOMKFDFPEK; // 0x18

// ===== public void .ctor()  [RVA 0x2FF98C0]
// RaidConfig.BEGFIIECDMN$$.ctor @ RVA 0x2FF98C0

void RaidConfig_BEGFIIECDMN___ctor(RaidConfig_BEGFIIECDMN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ac1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
    DAT_04565ac1 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_int>_TypeInfo,method)
  ;
  System_Collections_Generic_Dictionary<object,_int>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
  (__this->fields).GJCCGCCOJCO = (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

