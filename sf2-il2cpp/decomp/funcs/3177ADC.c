// Nekki.SF2.GUI.Pvp.SelectModule$$Update @ RVA 0x3177ADC

void Nekki_SF2_GUI_Pvp_SelectModule__Update
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Nekki_SF2_GUI_Pvp_SelectModule_c *pNVar5;
  MGNDHCBAPEN_int__int__o *pMVar6;
  System_Action_string__string__o *pSVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = (__this->fields).HIHIILLMINJ;
  if (0.0 <= fVar9) {
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar9 = fVar9 + fVar8;
    (__this->fields).HIHIILLMINJ = fVar9;
    if (1.0 < fVar9) {
      pNVar5 = __this->klass;
      (__this->fields).HIHIILLMINJ = -1.0;
      pSVar7 = (__this->fields).ICFAKOCJNGE;
      uVar3 = (*(pNVar5->vtable)._20_ItemTemplate.methodPtr)
                        (__this,0,(pNVar5->vtable)._20_ItemTemplate.method);
      uVar4 = (*(__this->klass->vtable)._20_ItemTemplate.methodPtr)
                        (__this,1,(__this->klass->vtable)._20_ItemTemplate.method);
      if (pSVar7 == (System_Action_string__string__o *)0x0) goto LAB_03277bf8;
      (*(code *)(pSVar7->fields).super.super.invoke_impl)
                ((pSVar7->fields).super.super.method_code,uVar3,uVar4,
                 (pSVar7->fields).super.super.method);
    }
  }
  pMVar6 = (__this->fields).LAAFICOIGGA;
  if (pMVar6 != (MGNDHCBAPEN_int__int__o *)0x0) {
    uVar1 = (pMVar6->fields).PHPELPFMOII;
    uVar2 = (pMVar6->fields).DOKHHBGJICA;
    if (uVar1 != 0 || uVar2 != 0) {
      (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
                (__this,0,(ulong)uVar1,(ulong)uVar2,1,(__this->klass->vtable)._13_BHOPECNMJAC.method
                );
      pMVar6 = (__this->fields).LAAFICOIGGA;
      if (pMVar6 == (MGNDHCBAPEN_int__int__o *)0x0) goto LAB_03277bf8;
      (pMVar6->fields).PHPELPFMOII = 0;
      (pMVar6->fields).DOKHHBGJICA = 0;
    }
    pMVar6 = (__this->fields).JGLNHNCBFOD;
    if (pMVar6 != (MGNDHCBAPEN_int__int__o *)0x0) {
      uVar1 = (pMVar6->fields).PHPELPFMOII;
      uVar2 = (pMVar6->fields).DOKHHBGJICA;
      if (uVar1 != 0 || uVar2 != 0) {
        (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
                  (__this,1,(ulong)uVar1,(ulong)uVar2,1,
                   (__this->klass->vtable)._13_BHOPECNMJAC.method);
        pMVar6 = (__this->fields).JGLNHNCBFOD;
        if (pMVar6 == (MGNDHCBAPEN_int__int__o *)0x0) goto LAB_03277bf8;
        (pMVar6->fields).PHPELPFMOII = 0;
        (pMVar6->fields).DOKHHBGJICA = 0;
      }
      return;
    }
  }
LAB_03277bf8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

