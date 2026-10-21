// AnimatedSprite$$GDAGKPBCOBE @ RVA 0x33F5E28

void AnimatedSprite__GDAGKPBCOBE(AnimatedSprite_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *in_x2;
  
  AnimatedSprite__DHEBEHGMBOA(__this,(__this->fields).FJJPFEGPEFA,in_x2);
  iVar1 = (__this->fields).FJJPFEGPEFA + 1;
  (__this->fields).FJJPFEGPEFA = iVar1;
  if ((__this->fields).KOCFHNLDNFB <= iVar1) {
    iVar1 = (__this->fields).EGNEJBJIAJC;
    (__this->fields).FJJPFEGPEFA = 0;
    if ((iVar1 != -1) && (iVar1 = iVar1 + -1, (__this->fields).EGNEJBJIAJC = iVar1, iVar1 < 1)) {
      (__this->fields).HFCMLMAKMNJ = false;
    }
  }
  return;
}

