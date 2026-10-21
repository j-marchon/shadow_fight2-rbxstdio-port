// TypeDefIndex 2183
// Namespace: 
// [CompilerGenerated]
// private sealed class DOPEEDABNEK.EBBECCBDFOJ
// Fields:
//   public string type; // 0x10

// ===== public void .ctor()  [RVA 0x32E0D04]
// DOPEEDABNEK.EBBECCBDFOJ$$.ctor @ RVA 0x32E0D04

void DOPEEDABNEK_EBBECCBDFOJ___ctor(DOPEEDABNEK_EBBECCBDFOJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool EKJKLIKMNKL(HOOAAGABMBL x)  [RVA 0x32E4F18]
// DOPEEDABNEK.EBBECCBDFOJ$$EKJKLIKMNKL @ RVA 0x32E4F18

bool DOPEEDABNEK_EBBECCBDFOJ__EKJKLIKMNKL
               (DOPEEDABNEK_EBBECCBDFOJ_o *__this,HOOAAGABMBL_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  
  if ((x != (HOOAAGABMBL_o *)0x0) &&
     (__this_00 = (x->fields)._GMPAEDFIIHF_k__BackingField, __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__Equals(__this_00,(__this->fields).type,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = (x->fields).BDGHEBINKCB != false;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

