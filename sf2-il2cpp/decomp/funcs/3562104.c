// Nekki.SF2.Core.Fights.ModelContainer$$FixedUpdate @ RVA 0x3562104

void Nekki_SF2_Core_Fights_ModelContainer__FixedUpdate
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  
  if ((__this->fields).ALBNJDPLOKJ != false) {
    if ((__this->fields).IBGCIPCGICB < 1) {
      Nekki_SF2_Core_Fights_ModelContainer__OLIFIINLMLJ(__this,false,in_x2);
      (__this->fields).IBGCIPCGICB = 0;
      (__this->fields).ALBNJDPLOKJ = false;
      method = extraout_x1_00;
    }
    else {
      Nekki_SF2_Core_Fights_ModelContainer__OLIFIINLMLJ(__this,true,in_x2);
      method = extraout_x1;
    }
  }
  if (((__this->fields).OHHFPJMIOCP != false) ||
     (bVar1 = UnityEngine_Input__GetKeyDown(0x3d,(MethodInfo *)0x0), method = extraout_x1_01, bVar1)
     ) {
    Nekki_SF2_Core_Fights_ModelContainer__BDHAMOEKNNK(__this,method);
  }
  bVar1 = UnityEngine_Input__GetKeyDown(0x2d,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).OHHFPJMIOCP = (bool_conflict)((__this->fields).OHHFPJMIOCP ^ 1);
  }
  return;
}

