// InControl.TwoAxisInputControl$$get_HasChanged @ RVA 0x35C31CC

bool InControl_TwoAxisInputControl__get_HasChanged
               (InControl_TwoAxisInputControl_o *__this,MethodInfo *method)

{
                    /* try { // try from 036c31d0 to 037c31d7 has its CatchHandler @ 036c32c4 */
  return (__this->fields).thisState != (__this->fields).lastState;
}

