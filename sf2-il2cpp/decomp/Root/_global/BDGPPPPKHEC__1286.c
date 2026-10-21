// TypeDefIndex 1286
// Namespace: 
// public class BDGPPPPKHEC
// Fields:
//   public string FHDMOOCFDHM; // 0x10
//   public List<string> FGAENDJJOGN; // 0x18

// ===== public void .ctor(string KGLJICLJHEL, List<string> KFKKBEEFOCB)  [RVA 0x3151108]
// BDGPPPPKHEC$$.ctor @ RVA 0x3151108

void BDGPPPPKHEC___ctor(BDGPPPPKHEC_o *__this,System_String_o *KGLJICLJHEL,
                       System_Collections_Generic_List_string__o *KFKKBEEFOCB,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  
  if ((DAT_0456680a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_0456680a = 1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).FGAENDJJOGN;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).FHDMOOCFDHM = KGLJICLJHEL;
  thunk_FUN_01c20e04(&__this->fields,KGLJICLJHEL);
  *ppSVar1 = KFKKBEEFOCB;
  thunk_FUN_01c20e04(ppSVar1,KFKKBEEFOCB);
  return;
}

