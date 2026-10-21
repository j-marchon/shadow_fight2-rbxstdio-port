// TypeDefIndex 66
// Namespace: 
// public class RaidConfig.NFKNNOPFJEE
// Fields:
//   public string NPGIJEJKNKO; // 0x10
//   public readonly Dictionary<string, string> MKOLIPBIAHP; // 0x18

// ===== public void .ctor()  [RVA 0x2FFB898]
// RaidConfig.NFKNNOPFJEE$$.ctor @ RVA 0x2FFB898

void RaidConfig_NFKNNOPFJEE___ctor(RaidConfig_NFKNNOPFJEE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565adc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    DAT_04565adc = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  ppSVar1 = &(__this->fields).MKOLIPBIAHP;
  *ppSVar1 = (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

