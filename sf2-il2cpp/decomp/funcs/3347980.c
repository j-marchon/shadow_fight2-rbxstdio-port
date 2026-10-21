// Nekki.SF2.GUI.Map.ZoneScrollItem$$SetBackgroundColor @ RVA 0x3347980

void Nekki_SF2_GUI_Map_ZoneScrollItem__SetBackgroundColor
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,UnityEngine_Color_o EFJKPCADGJH,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if ((DAT_045679cf & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    DAT_045679cf = 1;
  }
  (__this->fields).ILHMFFCAIFD.fields.r = EFJKPCADGJH.fields.r;
  (__this->fields).ILHMFFCAIFD.fields.g = EFJKPCADGJH.fields.g;
  (__this->fields).ILHMFFCAIFD.fields.b = EFJKPCADGJH.fields.b;
  (__this->fields).ILHMFFCAIFD.fields.a = EFJKPCADGJH.fields.a;
  pIVar1 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03447a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pIVar1->klass->vtable[0x17].methodPtr)
              ((__this->fields).ILHMFFCAIFD.fields.r,(__this->fields).ILHMFFCAIFD.fields.g,
               (__this->fields).ILHMFFCAIFD.fields.b,(__this->fields).ILHMFFCAIFD.fields.a,pIVar1,
               pIVar1->klass->vtable[0x17].method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

