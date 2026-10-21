// TypeDefIndex 1710
// Namespace: 
// public class KINHGEBKOEG
// Fields:
//   public int NOPGBJNLFHM; // 0x10
//   public int AEIJFFBOBCP; // 0x14
//   public string JIJLBFGKNJK; // 0x18
//   public HEFOANCOHDC ILEGAKGGJKI; // 0x20
//   public Dictionary<string, string> JPNMMLFPECM; // 0x28

// ===== public void .ctor()  [RVA 0x31D57F4]
// KINHGEBKOEG$$.ctor @ RVA 0x31D57F4

void KINHGEBKOEG___ctor(KINHGEBKOEG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566cde & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    DAT_04566cde = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  ppSVar1 = &(__this->fields).JPNMMLFPECM;
  *ppSVar1 = (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

