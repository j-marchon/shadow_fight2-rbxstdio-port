// Nekki.SF2.GUI.SimpleScroll$$POHJDOKIPBD @ RVA 0x302C6CC

void Nekki_SF2_GUI_SimpleScroll__POHJDOKIPBD
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  
  UVar1 = (__this->fields).GNMNFMOHDMG.fields;
  if ((UVar1 == (UnityEngine_Vector2_Fields)0x0) || (*(int *)((long)UVar1 + 0x18) != 2)) {
    return;
  }
                    /* try { // try from 0312c6e8 to 0322c6eb has its CatchHandler @ 0312c758 */
                    /* try { // try from 0312c6ec to 0322c6f7 has its CatchHandler @ 0312c75c */
  if (*(UnityEngine_Transform_o **)((long)UVar1 + 0x20) != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__SetAsFirstSibling
              (*(UnityEngine_Transform_o **)((long)UVar1 + 0x20),(MethodInfo *)0x0);
                    /* try { // try from 0312c6f8 to 0322c773 has its CatchHandler @ 0312c6a0 */
    UVar1 = (__this->fields).GNMNFMOHDMG.fields;
    if (UVar1 != (UnityEngine_Vector2_Fields)0x0) {
      if (*(uint *)((long)UVar1 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (*(UnityEngine_Transform_o **)((long)UVar1 + 0x28) != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsLastSibling
                  (*(UnityEngine_Transform_o **)((long)UVar1 + 0x28),(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

