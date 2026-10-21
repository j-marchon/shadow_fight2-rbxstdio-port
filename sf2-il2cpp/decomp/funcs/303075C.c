// Nekki.SF2.GUI.Shop.ParameterScrollItem$$SetProgressBarValue @ RVA 0x303075C

void Nekki_SF2_GUI_Shop_ParameterScrollItem__SetProgressBarValue
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t KHNGEAFKJIP,
               int32_t NBHHBBOJJME,float PNEIGGOFIOA,MethodInfo *method)

{
  undefined8 uVar1;
  Il2CppMethodPointer pIVar2;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_c *pNVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 in_register_00005004;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(in_register_00005004,PNEIGGOFIOA);
  uVar4 = (ulong)(uint)NBHHBBOJJME;
  uVar5 = (ulong)(uint)KHNGEAFKJIP;
  pIVar2 = (__this->klass->vtable)._52_KFMNMGGDHFD.methodPtr;
  if (NBHHBBOJJME < KHNGEAFKJIP) {
    (*pIVar2)(uVar6,__this,uVar4,0);
    (*(__this->klass->vtable)._52_KFMNMGGDHFD.methodPtr)
              (uVar6,__this,uVar5,2,(__this->klass->vtable)._52_KFMNMGGDHFD.method);
    pNVar3 = __this->klass;
    uVar1 = 1;
    uVar5 = uVar4;
  }
  else {
    (*pIVar2)(uVar6,__this,uVar5,0,(__this->klass->vtable)._52_KFMNMGGDHFD.method);
    (*(__this->klass->vtable)._52_KFMNMGGDHFD.methodPtr)
              (uVar6,__this,uVar4,1,(__this->klass->vtable)._52_KFMNMGGDHFD.method);
    pNVar3 = __this->klass;
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x03130828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pNVar3->vtable)._52_KFMNMGGDHFD.methodPtr)
            (uVar6,__this,uVar5,uVar1,(pNVar3->vtable)._52_KFMNMGGDHFD.method);
  return;
}

