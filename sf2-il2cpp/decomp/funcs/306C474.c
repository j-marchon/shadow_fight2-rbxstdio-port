// GMGALNFPLPA$$AHEEHKHEBOO @ RVA 0x306C474

void GMGALNFPLPA__AHEEHKHEBOO(GMGALNFPLPA_o *__this,float MJPEMHDHCCJ,MethodInfo *method)

{
  bool bVar1;
  CocosAnimation_o *__this_00;
  UnityEngine_ParticleSystem_o *__this_01;
  int iVar2;
  UnityEngine_Object_o *x;
  float t;
  
  if ((DAT_04565f3d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f3d = 1;
  }
  if ((__this->fields).EPFNMABINOG != false) {
    iVar2 = (__this->fields).JDNKKGPNHPB;
    if (iVar2 == 1) {
      __this_00 = (__this->fields).AKBKJNNOMOD;
      if (__this_00 == (CocosAnimation_o *)0x0) {
LAB_0316c54c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      CocosAnimation__LerpAnimation01(__this_00,(__this->fields).KMMCDBNINOB,(MethodInfo *)0x0);
      iVar2 = (__this->fields).JDNKKGPNHPB;
    }
    if (iVar2 == 2) {
      x = (UnityEngine_Object_o *)(__this->fields).HGMMHCMHINJ;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        t = MJPEMHDHCCJ + MJPEMHDHCCJ;
        if (t <= 0.0) {
          t = 0.0;
        }
        iVar2 = 0x96;
        do {
          __this_01 = (__this->fields).HGMMHCMHINJ;
          if (__this_01 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_0316c54c;
          UnityEngine_ParticleSystem__Simulate(__this_01,t,(MethodInfo *)0x0);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    (__this->fields).EPFNMABINOG = false;
  }
  return;
}

