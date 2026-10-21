// TypeDefIndex 53
// Namespace: 
// public class RaidConfig.KJLILNPHJHI
// Fields:
//   public Dictionary<string, RaidConfig.BGJBFFKJHHD> EHGOHNHDKPP; // 0x10

// ===== public void .ctor()  [RVA 0x2FFB40C]
// RaidConfig.KJLILNPHJHI$$.ctor @ RVA 0x2FFB40C

void RaidConfig_KJLILNPHJHI___ctor(RaidConfig_KJLILNPHJHI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ad4 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_TypeInfo);
    DAT_04565ad4 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>__ctor__);
  (__this->fields).EHGOHNHDKPP =
       (System_Collections_Generic_Dictionary_string__JMDPBFOCHHP_BGJBFFKJHHD__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

