// IENLNOEDCFF$$EPBENPDCBFE @ RVA 0x30F2730

bool IENLNOEDCFF__EPBENPDCBFE
               (IENLNOEDCFF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,ECENNHNBAME_o *NLEBDPHNIDI,
               MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 031f2730 to 032f2733 has its CatchHandler @ 031f27f4 */
                    /* try { // try from 031f2734 to 032f273f has its CatchHandler @ 031f2800 */
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031f2748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (bool)(*(__this->klass->vtable)._4_EPBENPDCBFE.methodPtr)
                            ((char)__this,(BCKBBGCOMJD->fields).FNEAAHOOHAA,
                             (__this->klass->vtable)._4_EPBENPDCBFE.method);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

