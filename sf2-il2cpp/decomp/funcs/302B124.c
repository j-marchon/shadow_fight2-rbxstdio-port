// Nekki.SF2.GUI.SimpleScroll$$GFLOBMPEFEI @ RVA 0x302B124

void Nekki_SF2_GUI_SimpleScroll__GFLOBMPEFEI
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  System_Action_BaseScrollItem__o *pSVar1;
  
  (*(__this->klass->vtable)._41_StopMovement.methodPtr)
            (__this,(__this->klass->vtable)._41_StopMovement.method);
  pSVar1 = (__this->fields).FOKMEOHPDJL;
  if (pSVar1 != (System_Action_BaseScrollItem__o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

