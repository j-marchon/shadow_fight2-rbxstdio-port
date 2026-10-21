// TypeDefIndex 1840
// Namespace: 
// public class CountersFight.EMMLKOABOHF
// Fields:
//   public Dictionary<string, CountersFight.MJOLIJOPBMO> IAGNJPIIEPO; // 0x10

// ===== public void .ctor()  [RVA 0x3240D30]
// CountersFight.EMMLKOABOHF$$.ctor @ RVA 0x3240D30

void CountersFight_EMMLKOABOHF___ctor(CountersFight_EMMLKOABOHF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045670a1 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    DAT_045670a1 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>__ctor__);
  (__this->fields).IAGNJPIIEPO =
       (System_Collections_Generic_Dictionary_string__OJHODFIGFMA_MJOLIJOPBMO__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

