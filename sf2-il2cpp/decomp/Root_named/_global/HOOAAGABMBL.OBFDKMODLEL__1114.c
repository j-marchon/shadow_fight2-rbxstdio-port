// TypeDefIndex 1114
// Namespace: 
// [CompilerGenerated]
// private sealed class HOOAAGABMBL.OBFDKMODLEL
// Fields:
//   public int index; // 0x10

// ===== internal void MJOGKOIMIAJ(PONNKDFAMFM x)  [RVA 0x30F17B8]
// HOOAAGABMBL.OBFDKMODLEL$$MJOGKOIMIAJ @ RVA 0x30F17B8

void HOOAAGABMBL_OBFDKMODLEL__MJOGKOIMIAJ
               (HOOAAGABMBL_OBFDKMODLEL_o *__this,PONNKDFAMFM_o *x,MethodInfo *method)

{
  int iVar1;
  
  if (x != (PONNKDFAMFM_o *)0x0) {
    iVar1 = (__this->fields).index;
    (x->fields).DAIAEEBJBBJ = iVar1;
    (__this->fields).index = iVar1 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30E9460]
// HOOAAGABMBL.OBFDKMODLEL$$.ctor @ RVA 0x30E9460

void HOOAAGABMBL_OBFDKMODLEL___ctor(HOOAAGABMBL_OBFDKMODLEL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

